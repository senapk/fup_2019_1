#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int rand_int_fechado(int menor, int maior){
    return rand() % (maior - menor + 1) + menor;
}

//int retorna qtd de tentativas ate acertar
int jogar(int sup){
    int inf = 0;
    int escolhido = rand_int_fechado(1, sup - 1);
    //printf("Alice escolheu %d\n", escolhido);
    for(int i = 1; true; i++){
        int num = (inf + sup) / 2;
        //printf("]%04d, %04d[, Bob: Escolhi o %d. ", inf, sup, num);
        if(num == escolhido){
            //puts("Alice: acertou");
            return i;
        }else if(num < escolhido){
            //puts("Alice: eh maior");
            inf = num;
        }else{
            //puts("Alice: eh menor");
            sup = num;
        }
    }
}

void show_vet(float vet[], int size){
    printf("[");
    for(int j = 0; j < size; j++)
        printf("%.2f ", vet[j]);
    printf("]\n");
}

int main(){
    srand((unsigned) time(NULL));
    int size = 10;
    float vet[size];
    for(int i = 0; i < size; i++)
        vet[i] = 0;

    int vezes = 1000000000;
    for(int i = 0; i < vezes; i++){
        int qtd = jogar(1000);
        vet[qtd - 1]++;
        //printf("acertou em %d vezes. [ ", qtd);
        //show_vet(vet, size);
    }

    for(int i = 0; i < size; i++)
        vet[i] = (vet[i]*100)/vezes;
    show_vet(vet, size);
}