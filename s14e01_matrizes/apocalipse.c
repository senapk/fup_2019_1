#include <stdio.h>
#include <stdbool.h>




typedef struct{
    int l, c;
} Pos;

#define gerar_vizinhos(l, c) {{l, c - 1}, {l - 1, c}, {l, c + 1}, {l + 1, c}}

bool existe(int nl, int nc, int l, int c){
    if ((l < 0) || (l >= nl) || (c < 0) || (c > nc))
        return false;
    return true;
}

void contaminar_um(int nl, int nc, char novo[nl][nc], int pl, int pc){
        Pos viz[4] = gerar_vizinhos(pl, pc);
        for(int i = 0; i < 4; i++){
            Pos v = viz[i];
            if(existe(nl, nc, v.l, v.c))
                if(novo[v.l][v.c] == 'o')
                    novo[v.l][v.c] = 'x';
        }
}

void contaminar_novo(int nl, int nc, char mapa[nl][nc], char novo[nl][nc]){
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            if(mapa[l][c] == 'x'){
                contaminar_um(nl, nc, novo, l, c);
            }
        }
    }
}

bool sao_iguais(int nl, int nc, char mapa[nl][nc], char novo[nl][nc]){
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            if(mapa[l][c] != novo[l][c])
                return false;
    return true;
}

void show(int nl, int nc, char mapa[nl][nc]){
    for(int c = 0; c < nc; c++)
        printf("-");
    puts("");
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++)
            printf("%c", mapa[l][c]);
        puts("");
    }
}

void copia(int nl, int nc, char mapa_origem[nl][nc], char mapa_destino[nl][nc]){
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            mapa_destino[l][c] = mapa_origem[l][c];
}

int main(){
    int nl = 0, nc = 0;
    scanf("%d %d", &nl, &nc);
    char novo[nl][nc];
    char mapa[nl][nc];
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            scanf(" %c", &mapa[l][c]);
    show(nl, nc, mapa);
    while(true){
        copia(nl, nc, mapa, novo);
        contaminar_novo(nl, nc, mapa, novo);
        if(sao_iguais(nl, nc, mapa, novo))
            break;
        show(nl, nc, novo);
        copia(nl, nc, novo, mapa);
    }
}

