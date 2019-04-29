/* 
hoje eh um dia lindo
1 - precompilador
2 - compilação
*/


#include <stdio.h>
int main(){
    int vet[] = {0, 4, 6, 6, 5, 8, 6, 3, 1, 2, 8, 9, 6, 
                 5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 4, 2, 8, 8, 8, 8};
    int size = sizeof(vet)/sizeof(int);
    
    //para todos os elementos
    int maior = 0;
    int repeticoes = 0;
    for(int i = 0; i < size; i++){
        int elem = vet[i];
        int cont = 0;
        for(int j = 0; j < size; j++){
            if(vet[j] == elem)
                cont++;
        }
        if(cont > repeticoes){
            repeticoes = cont;
            maior = vet[i];
        }
    }
    printf("maior %d, repeticoes: %d\n", maior, repeticoes);
}

