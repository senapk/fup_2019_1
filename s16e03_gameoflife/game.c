#define SH_FULL
#include "sh.h"
//L, LU, U, UR, R, RD, D, DL
typedef struct{
    int l, c;
}LC;
#define get_neib(l, c) {{l+0,c-1},{l-1,c-1},{l-1,c+0},{l-1,c+1},{l+0,c+1},{l+1,c+1},{l+1,c+0},{l+1,c-1}}

int contar_vizinhos(int nl, int nc, bool mat[nl][nc], int l, int c){
    LC neib[] = get_neib(l, c);
    int cont = 0;
    for(int i = 0; i < 8; i++){
        if((neib[i].l < 0) || (neib[i].l >= nl) || (neib[i].c < 0) || (neib[i].c >= nc))
            continue;
        if(mat[neib[i].l][neib[i].c]){
            printf("%d %d\n", neib[i].l, neib[i].c);
            cont++;
        }
    }
    return cont;
}

void live_or_die(int nl, int nc, bool mat[nl][nc], bool nova[nl][nc], int l, int c){
    int cont = contar_vizinhos(nl, nc, mat, l, c);
    nova[l][c] = mat[l][c];
    if((mat[l][c] == false) && (cont == 3))
        nova[l][c] = true;
    else if((mat[l][c] == true) && ((cont < 2) || (cont > 3)))
        nova[l][c] = false;
}

void put_glider(int nl, int nc, bool mat[nl][nc], int l, int c){
    LC glider[] = {{0, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};
    for(int i = 0; i < 5; i++)
        mat[l + glider[i].l][c + glider[i].c] = true;
}

void print_mat(int nl, int nc, bool mat[nl][nc]){
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            char color = mat[l][c] ? 'b' : 'w';
            sh_color_load(color);
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
    int timer = 0;
    while(sh_input_get() != sh_EVQUIT){
        if(!sh_timer(&timer, 200))
            continue;
        nova_geracao(nl, nc, mat);
        sh_color_load('k');
        sh_clear();
        print_mat(nl, nc, mat);
        sh_display();
    }
    sh_quit();
}