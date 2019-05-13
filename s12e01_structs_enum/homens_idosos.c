



#include <stdio.h>
#include <stdbool.h>
typedef struct{
    char nome[20];
    int idade;
    char sexo;
} Pessoa;

int main(){
    int size;
    scanf("%d", &size);
    Pessoa pessoas[size];
    for(int i = 0; i < size; i++)
        scanf("%s %d %c", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].sexo);

    bool tem_mulher = false;
    int mais_velho = 0;
    for(int i = 1; i < size; i++){
        if(pessoas[i].sexo == 'f'){
            if(tem_mulher == false){
                mais_velho = i;
                tem_mulher = true;
            }
            else if(pessoas[i].idade > pessoas[mais_velho].idade)
                mais_velho = i;
        }
    }
    if(!tem_mulher)
        printf("nao tem mulher");
    else
        printf("%s\n", pessoas[mais_velho].nome);
}
