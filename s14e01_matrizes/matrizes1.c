#include <stdio.h>
#include <stdbool.h>





int main(){
    int nl = 0, nc = 0;
    scanf("%d %d", &nl, &nc);
    char mapa[nl][nc];

    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            scanf(" %c", &mapa[l][c]);

    bool encontrei = false;
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            if(mapa[l][c] == 'x'){
                encontrei = true;
                printf("%d %d\n", l, c);
                break;
            }
        }
        if(encontrei)
            break;
    }    
}