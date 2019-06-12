#define SH_FULL
#include "sh.h"
//L, LU, U, UR, R, RD, D, DL
#define gercolv(c)  {c - 1, c - 1, c    , c + 1, c + 1, c + 1, c    , c - 1};
#define gerlinv(l)  {l    , l - 1, l - 1, l - 1, l    , l + 1, l + 1, l + 1};

int contar_vizinhos(int nl, int nc, bool mat[nl][nc], int l, int c){
    int vc[] = gercolv(c);
    int vl[] = gerlinv(l);
    int cont = 0;
    for(int i = 0; i < 8; i++){
        if((vl[i] < 0) || (vl[i] >= nl) || (vc[i] < 0) || (vc[i] >= nl))
            continue;
        if(mat[vl[i]][vc[i]])
            cont++;
    }
    return cont;
}

void live_or_die(int nl, int nc, bool mat[nl][nc], bool nova[nl][nc], int l, int c){
    int cont = contar_vizinhos(nl, nc, mat, l, c);
    if((mat[l][c] == false) && (cont == 3)){
        nova[l][c] = true;
        return;
    }
    if((mat[l][c] == true) && ((cont < 2) || (cont > 3))){
        nova[l][c] = false;
        return;
    }
    nova[l][c] = mat[l][c];
}

void put_glider(int nl, int nc, bool mat[nl][nc], int l, int c){
    mat[l + 0][c + 1] = true;
    mat[l + 1][c + 2] = true;
    mat[l + 2][c + 0] = true;
    mat[l + 2][c + 1] = true;
    mat[l + 2][c + 2] = true;
}

void print_mat(int nl, int nc, bool mat[nl][nc]){
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            if(mat[l][c])
                sh_color_load('b');
            else
                sh_color_load('w');
            sh_grid_splot(l, c);
        }
    }
}

void nova_geracao(int nl, int nc, bool mat[nl][nc]){
    bool nova[nl][nc];
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            live_or_die(nl, nc, mat, nova, l, c);
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            mat[l][c] = nova[l][c];
}

int main(){
    int lado = 30, largura = 900, altura = 600;
    int nl = altura / lado, nc = largura / lado;
    sh_init(largura, altura);
    sh_grid_init(lado, 1);
    bool mat[nl][nc];
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            mat[l][c] = false;
    put_glider(nl, nc, mat, 1, 1);
    put_glider(nl, nc, mat, 8, 1);

    int timer = 0;
    while(true){
        char c = sh_input_get();
        if (c == sh_EVQUIT)
            break;
        if(sh_timer(&timer, 200))
            nova_geracao(nl, nc, mat);
        sh_color_load('k');
        sh_clear();
        print_mat(nl, nc, mat);
        sh_display();
    }
    sh_quit();
}