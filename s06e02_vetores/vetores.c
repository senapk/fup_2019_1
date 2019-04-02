#include <stdio.h>

void mostrar_vetor(int vetor[], int size){
    printf("[ ");
    for(int i = 0; i < size; i += 1)
        printf("%d ", vetor[i]); 
    printf("]\n");
}

int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];
    for(int i = 0; i < size; i += 1){
        scanf("%d", &vet[i]);
    }
    mostrar_vetor(vet, size);
}



