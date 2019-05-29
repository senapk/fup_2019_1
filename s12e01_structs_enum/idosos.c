



#include <stdio.h>
typedef struct{
    char nome[20];
    int idade;
} Pessoa;

int main(){
    int size;
    scanf("%d", &size);
    Pessoa pessoas[size];
    for(int i = 0; i < size; i++){
        scanf("%s", pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);
    }

    int mais_velho = 0;
    for(int i = 1; i < size; i++)
        if(pessoas[i].idade > pessoas[mais_velho].idade)
            mais_velho = i;
    printf("%s\n", pessoas[mais_velho].nome);
}
