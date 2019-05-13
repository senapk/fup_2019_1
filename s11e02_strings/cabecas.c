#include <stdio.h>

int procurar_vivo(int vet[], int size, int ind){
    do { //controle de parada
        ind = (ind + 1) % size; //lista circular
    } while(vet[ind] == -1);
    return ind;
}

void show(int vet[], int size){
    printf("[ ");
    for(int i = 0; i < size; i++){
        if(vet[i] != -1)
            printf("%d ", vet[i]);
    }
    printf("]\n");
}

int main(){
    int size = 0;
    int esc = 0;
    scanf("%d %d", &size, &esc);
    int vet[size];
    for(int i = 0; i < size; i++)
        vet[i] = i + 1;
    int ind = esc - 1;
    for(int i = 0; i < size - 1; i++){
        show(vet, size);
        int morto = procurar_vivo(vet, size, ind);
        vet[morto] = -1;
        ind = procurar_vivo(vet, size, morto);
    }
    printf("%d\n", vet[ind]);
}
    