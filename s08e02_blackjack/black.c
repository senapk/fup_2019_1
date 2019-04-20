#include <stdio.h>

int get_valor(int carta){
    if(carta == 1)
        return 11;
    if(carta > 9)
        return 10;
    return carta;
}

void mostrar_carta(int carta){
    if(carta == 1)
        printf("A");
    else if(carta == 11)
        printf("J");
    else if(carta == 12)
        printf("Q");
    else if(carta == 13)
        printf("K");
    else
        printf("%d", carta);
    
}

void mostrar_mao(int mao[], int size_mao){
    printf("[");
    for(int i = 0; i < size_mao; i++){
        mostrar_carta(mao[i]);
        if(i != size_mao - 1)
            printf(", ");
    }
    printf("]");
}

/* int calcular_mao(int mao[], int size_mao){
    num_as = 0
    total = 0
    para cada carta na mao:
        total += valor_carta(carta)
        se carta for as:
            num_as += 1
    enquanto estiver estourado e tiver as:
        total -= 10
        as -= 1
    return total
} */

int main(){
    int MAX = 100;
    int mao[MAX];
    int size_mao = 0;

    int mesa[MAX];
    int size_mesa = 0;
    
    int carta = rand() % 13 + 1;
    mao[size_mao] = carta;
    size_mao += 1;
    
    carta = rand() % 13 + 1;
    mao[size_mao] = carta;
    size_mao += 1;

    carta = rand() % 13 + 1;
    mao[size_mao] = carta;
    size_mao += 1;

    carta = rand() % 13 + 1;
    mao[size_mao] = carta;
    size_mao += 1;

    mostrar_mao(mao, size_mao);// [A, 6, A, K]
    //int total = calcular_mao(mao, size_mao);
    //printf("total: %d\n", total);//18
}