#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int vet[], int size){
    for(int i = 0; i < size; i++){
        int ind = i;
        for(int j = i; j < size; j++){
            if(vet[j] < vet[ind])
                ind = j;
        }
        int aux = vet[ind];
        vet[ind] = vet[i];
        vet[i] = aux;
    }
}


int main(){
    srand((unsigned)time(NULL));
    int size = 20;
    int vet[size];
    for(int i = 0; i < size; i++)
        vet[i] = rand() % 30;

    selection_sort(vet, size);

    for(int i = 0; i < size; i++)
        printf("%d ", vet[i]);
    
}