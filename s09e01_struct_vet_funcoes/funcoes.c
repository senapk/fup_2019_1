#include <stdio.h>


typedef struct{
    int num;
    int ocor;
} Freq;

int procurar_numero(Freq freq[], int freq_size, int value){
    for(int i = 0; i < freq_size; i++)
        if(freq[i].num == value)
            return i;
    return -1;
}

int procurar_mais_repetido(Freq freq[], int freq_size){
    int maior = 0;
    for(int i = 1; i < freq_size; i++){
        if(freq[i].ocor > freq[maior].ocor)
            maior = i;
    }
    return maior;
}


//numeros desordenados
int main(){
    int amostra[] = {4, 3, 3, 3, 2, 1, 1, 1, 1, 9};
    int amostra_size = sizeof(amostra)/sizeof(int); 

    //for(int i = 0; i < amostra_size; i++) 
    //    scanf("%i", &amostra[i]);

    Freq freq[amostra_size];//{{4, 1}, {3, 3}, {2, 1}, {1, 4}, {9, 1}}
    int freq_size = 0;//5

    for(int i = 0; i < amostra_size; i++){
        int pos = procurar_numero(freq, freq_size, amostra[i]);
        if(pos == -1){
            freq[freq_size].num = amostra[i];
            freq[freq_size].ocor = 1;
            freq_size += 1;
        }else{
            freq[pos].ocor += 1;
        }
    }
    int mais_repetido = procurar_mais_repetido(freq, freq_size);
    printf("%d\n", freq[mais_repetido].num);
}
/*
//numeros ordena
percorra a lista principal guardando o menor e o maior valor
crie uma lista de ocorrencias de tamanho suficiente para guardar todos os elementos
para cada elemento da lista principal
    busque a posicao dele na lista de ocorrencias
        aumente 1
percorre a lista de ocorrencias procurando quem apareceu mais vezes 

1, 3, 4, 1, 2, 3, 4




1 - 2
3 - 1
4 - 1





int, float, char, double, 
int *, float *, char *, double *
struct, enum

WRONG!!!!!!!!!!!!!!!!!
vet[] nome_da_funcao(tipo para, tipo para){
    int vet[] = {1, 2, 3, 4, 5};
    return vet;
}

*/