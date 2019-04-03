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
    printf("escolha mentalmente um numero ]0, %d[ e digite enter", sup);
    getchar();
    for(int i = 1; true; i++){
        int num = rand_int_fechado(inf + 1, sup - 1);
        printf("]%04d, %04d[, escolhi o %d. ", inf, sup, num);
        printf("M(eh maior?) m(eh menor?) =(igual): ");
        char feedback = 0; 
        scanf(" %c", &feedback);
        if(feedback == '='){
            puts("acertei");
            return i;
        }else if(feedback == 'm'){
            sup = num;
        }else{
            inf = num;
        }
    }
}

int main(){
    srand((unsigned) time(NULL));
    int qtd = jogar(16);
    printf("acertou em %d vezes\n", qtd);
}