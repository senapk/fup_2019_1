#include <stdio.h>
#include <stdlib.h>//rand e srand
#include <time.h> //time
#include <stdbool.h>

int rand_int_fechado(int menor, int maior);

bool acertou_chute(int chute, int escolhido);

//declaração da função ou protótipo da função
int jogar(int tentativas_max, int inter_sup);

int main(){
    srand((unsigned) time(NULL));
    if(jogar(4, 16) > 10)
        puts("perdeu otario");
    else
        puts("foi sorte");
    return 0; //deu certo, linha 
}

int rand_int_fechado(int menor, int maior){
    return rand() % (maior - menor + 1) + menor;
}

bool acertou_chute(int chute, int escolhido){
    if(chute == escolhido){
        puts("Acertou");
        return true;
    }else if(chute > escolhido){
        puts("Eh menor");
    }else{
        puts("Eh maior");
    }
    return false;
}

//retorna quantas tentativas ele usou
int jogar(int tentativas_max, int inter_sup){
    int escolhido = rand_int_fechado(1, inter_sup - 1);
    printf("Escolhi um número entre ]0, %d[\n", inter_sup);
    int chute = 0;
    for(int i = 0; i < tentativas_max; i += 1){
        printf("%d chances: digite o chute: ", (10 - i));
        scanf("%d", &chute);
        if(acertou_chute(chute, escolhido))
            return i + 1;
    }
    return tentativas_max + 1;
}





