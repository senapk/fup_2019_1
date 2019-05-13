#include <stdio.h>
#include <stdlib.h>

int new_card(){
    return rand() % 13 + 1;
}
void vet_add(int vet[], int *size){
    vet[*size] = new_card();
    *size += 1;
}

void show(int vet[], int size){
    printf("[ ");
    for(int i = 0; i < size; i++)
        printf("%d ", vet[i]);
    printf("]\n");
}

void jogar_jogador(int mao[], int * size_mao){
    int op = 0;
    while(1){
        puts("0 para pedir, 1 para parar");
        scanf("%d", &op);
        if(op == 1)
            break;
        vet_add(mao, size_mao);
        show(mao, *size_mao);
    }
}

int main(){
    int mao[1000];
    int size_mao = 0;
    vet_add(mao, &size_mao);
    vet_add(mao, &size_mao);
    int mesa[1000];
    int size_mesa = 0;
    vet_add(mesa, &size_mesa);
    show(mao, size_mao);
    show(mesa, size_mesa);

    jogar_jogador(mao, &size_mao);
}