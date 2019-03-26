#include <stdio.h>
int main(){
    int profundidade = 0;
    int salto = 0;
    int escorregamento = 0;
    scanf("%d %d %d", &profundidade, &salto, &escorregamento);
    int sapinho = 0;

    while(sapinho < profundidade){
        printf("%d ", sapinho);
        sapinho += salto;
        if(sapinho < profundidade){
            printf("%d\n", sapinho);
            sapinho -= escorregamento;
        }
    }
    puts("saiu");

