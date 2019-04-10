#include <stdio.h>

void selection_sort(int vet[], int size){
    for(int i = 0; i < size; i++){
        int imenor = i;
        for(int j = i; j < size; j++){
            if(vet[j] < vet[imenor])
                imenor = j;
        }
        int aux = vet[i];
        vet[i] = vet[imenor];
        vet[imenor] = aux;
    }
}

int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &vet[i]);
    printf("[ ");
    selection_sort(vet, size);
    for(int i = 0; i < size; i++)
        printf("%d ", vet[i]);
    printf("]\n");
}