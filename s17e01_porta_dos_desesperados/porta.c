

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
void init_doors(bool vet[3]){
    for(int i = 0; i < 3; i++)
        vet[i] = false;
    vet[rand() % 3] = true;
}

int show_empty_door(bool vet[3], int op){
    int opcoes[2];
    int size = 0;
    for(int i = 0; i < 3; i++){ // {T,F,F} {1, 2}
        if((vet[i] == false) && (i != op)){
            opcoes[size] = i;
            size++;
        }
    }
    return opcoes[rand() % size]; //0 ou 1
}

bool jogador_ganhou(bool vet[3], int op, int trocar){
    if(trocar == 0 && vet[op] == true)
        return true;
    if(trocar == 1 && vet[op] == false)
        return true;
    return false;
}

int main(){
    srand(time(NULL));
    long int vitorias = 0;
    long int vezes = 100000000;
    for(long int i = 0; i < vezes; i++){
        bool vet[3];
        init_doors(vet);
        int op = 0, trocar = 0;
        //puts("Escolha de 0 a 2");
        //scanf("%d", &op);
        op = rand() % 3;
        int mostrada = show_empty_door(vet, op);
        (void) mostrada;
        //printf("porta %d esta vazia\n", mostrada);
        //puts("quer trocar(0/1)");
        //scanf("%d", &trocar);
        trocar = 0;
        if(jogador_ganhou(vet, op, trocar)){
            //puts("ganhou");
            vitorias++;
        }
            //puts("perdeu");
    }
    printf("vitorias %f\n", (float) vitorias/vezes);
}

