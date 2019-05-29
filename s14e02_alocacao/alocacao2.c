
#include <stdio.h>
#include <stdlib.h>
int * pegar_seq(){
    int * vet = malloc(3 * sizeof(int));//heap
    for(int i = 0; i < 3; i++)
        vet[i] = i + 1;
    return vet;
}

int main(){
    for(int i = 0; i < 10; i++){
        int * vet = pegar_seq();
        printf("%d %d %d\n", vet[0], vet[1], vet[2]);
        free(vet);
    }
}