
#include <stdio.h>

int getValue(){
    static int cont = 0;
    cont += 1;
    return cont;
}

int * pegar_seq(){
    static int vet[3] = {1, 2, 3};
    return &vet[0];
}


int main(){
    //int x = getValue();
    int * vet = pegar_seq();
    printf("%d %d %d\n", vet[0], vet[1], vet[2]);
}