#include <stdio.h>
#include <string.h>
#include <ctype.h>
//strlen - calcular o tamanho
//strcpy - copiar para
//strcat - concatenar
//strcmp - comparar

//strtok - extrair tokens
//strspn - buscar caracteres
//atoi - converter string para inteiro
//itoa - converter inteiro para string
//atof - string -> float
//ftoa - float -> string


char * pegar_nome(int value){
    char * nomes[] = {"", "A", "2", "3", "4", 
                    "5", "6", "7", "8", "9",
                    "10", "J", "Q", "K"};
    return nomes[value];
}

int main(){
    //cria uma constante "Kobra Kai"
    //cria uma variavel nome e ponta pra constante
    const char * nome = "Kobra Kai";
    printf("%s\n", nome);//Kobra Kai
    //nome[0] -> K
    //nome[9] -> \0
    for(int i = 0; i < (int) strlen(nome); i++)
        printf("%c ", nome[i]);
    
    int mao[5] = {1, 11, 12, 4, 9};
    for(int i = 0; i < 5; i++)
        printf("%s ", pegar_nome(mao[i]));

    //const char * nome2 = "meu nome";
    char nome3[15];

    //nome3 = "Ze Rui"; erraaaaaaaaaaaado
    strcpy(nome3, "Jose Ruimaro");
    puts(nome3);//Jose Ruimaro

    if(strcmp(nome3, "Jose Ruimaro") == 0)
        puts("sao iguais");

    nome3[0] = 'j';

    char c = 'f';

}