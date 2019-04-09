#include <stdio.h>
#include <stdlib.h>//rand
#include <stdbool.h>

void selection(int vet[], int size){
    for(int i = 0; i < size; i++){
        int ind_menor = i;
        for(int j = i; j < size; j++)
            if(vet[j] < vet[ind_menor])
                ind_menor = j;
        int aux = vet[i];
        vet[i] = vet[ind_menor];
        vet[ind_menor] = aux;
    }
}

void insertion(int vet[], int size){
    for(int i = 1; i < size; i++){
        for(int j = i; j > 0; j--){
            if(vet[j] > vet[j - 1])
                break;
            int aux = vet[j];
            vet[j] = vet[j - 1];
            vet[j - 1] = aux;
        }
    }
}

//retorna a posição de valor ou -1 se valor nao existe
int find(int vet[], int size, int value){
    for(int u = 0; u < size; u++)
        if(vet[u] == value)
            return u;
    return -1;
}

int count(int vet[], int size, int value){
    int cont = 0;
    for(int u = 0; u < size; u++)
        if(vet[u] == value)
            cont++;
    return cont;
}

/* 
int busca_binaria(int vet[], int size){
    int inf = 0;
    int sup = size - 1;
    int meio = (inf + sup)/2;
    if()
}
 */


int main(){
    srand(1);
    int size = 20;
    int vet[size];
    for(int i = 0; i < size; i++)//para todos os elem do vetor
        vet[i] = rand() % 100; //coloque um numero entre 0 e 99
    insertion(vet, size);
    for(int i = 0; i < size; i++)
        printf("%d ", vet[i]);
    puts("");

    puts("Digite um numero ou -1 para sair;");
    while(true){
        int num = 0;
        scanf("%d", &num);
        if(num == -1)
            break;
        int pos = find(vet, size, num);
        printf("pos: %d\n", pos);
    };
}