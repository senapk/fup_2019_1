#include <stdio.h>


int buscar(int vet[], int size, int valor){
    for(int i = 0; i < size; i++)
        if(vet[i] == valor || vet[i] == -valor)
            return i;
    return -1;
}

void inverter(int vet[], int size, int pos){
    if(pos < 0 || pos >= size)
        return;
    vet[pos] = -vet[pos];
}

void show(int vet[], int size){
    printf("[");
    for(int i = 0; i < size; i++){
        if(i != 0)
            printf(" ");
        printf("%d", vet[i]);
    }
    printf("]\n");
}

int main(){
    int n_casos = 0;
    scanf("%d", & n_casos);
    while(n_casos--){
        int size;
        int grito;
        scanf("%d %d", &size, &grito);
        int vet[size];
        for(int i = 0; i < size; i++)
            scanf("%d", &vet[i]);
        int pos = buscar(vet, size, grito);
        if(pos != -1){
            inverter(vet, size, pos - 1);
            inverter(vet, size, pos + 1);
        }
        show(vet, size);
    }
    
    
    
}
