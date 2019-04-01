#include <stdio.h>
#include <stdlib.h>//rand e srand
#include <time.h> //time
#include <stdbool.h>



int rand_int_fechado(int menor, int maior){
    int num = rand() % (maior - menor + 1) + menor;
}

int main(){
    srand(time(NULL));
    int escolhido = rand_int_fechado(1, 99);
    puts("Escolhi um número entre ]0, 100[");
    bool acertou = false;
    for(int i = 0; i < 10; i += 1){
        printf("%d chances: digite o chute: ", (10 - i));
        int chute = 0;
        scanf("%d", &chute);
        if(chute == escolhido){
            puts("Acertou");
            acertou = true;
            break;
        }else if(chute > escolhido){
            puts("Eh menor");
        }else{
            puts("Eh maior");
        }
    }
    if(!acertou){
        puts("Errou");
    }
}
