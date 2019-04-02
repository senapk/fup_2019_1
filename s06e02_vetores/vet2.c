


#include <stdio.h>



int encontrar_menor(int vet[], int size){
    int menor = vet[0];
    for(int i = 1; i < size; i++)
        if(vet[i] < menor)
            menor = vet[i];
    return menor;
}

int contar_iguais(int vet[], int size, int value){
    int cont = 0;
    for(int i = 0; i < size; i++)
        if(vet[i] == value)
            cont++;
    return cont;
}

int main(){
    int vet[] = {1, 1, 0, 5, 2, 4, 4, 0, 0, 0};
    int size = sizeof(vet)/sizeof(int);

    int menor = encontrar_menor(vet, size);
    int cont = contar_iguais(vet, size, menor);
    printf("%d\n", cont);

    puts("");

}




/*
criar uma lista de tamanho 'qtd'
faça 'qtd' vezes:
    le o numero
    guarda na lista
maior eh o primeiro da lista
a partir do segundo elem até o final faça
    se lista[elem] > maior:
        maior agora eh lista[elem]
cont = 0
para todos os elementos da lista:
    se elem for igual a maior
        cont += 1
 */