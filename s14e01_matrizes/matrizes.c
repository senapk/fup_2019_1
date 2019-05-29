#include <stdio.h>
#include <stdbool.h>



typedef struct{
    int l, c;
} Coord;


Coord encontrar_x(int nl, int nc, char mapa[nl][nc]){
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            if(mapa[l][c] == 'x'){
                #if 0
                Coord coord;
                coord.l = l;
                coord.c = c;
                return coord;
                #endif
                #if 0
                Coord coord = {l, c};
                return coord;
                #endif
                return (Coord){l, c};
            }
    return (Coord){-1, -1};
}


int main(){
    int nl = 0, nc = 0;
    scanf("%d %d", &nl, &nc);
    char mapa[nl][nc];

    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            scanf(" %c", &mapa[l][c]);
    Coord resp = encontrar_x(nl, nc, mapa);
    printf("%d %d\n", resp.l, resp.c);
}