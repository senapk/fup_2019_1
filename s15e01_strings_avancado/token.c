#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
    //strlen, strcat, strcpy, strcmp
    //tolower, toupper, isalpha
    //fgets() le linha inteira ate o \n

    //A melhor banana de Fortaleza eh do Andre
    //O rato Roeu a Roupa do rei de Roma
    
    //[ A Fortaleza Andre ]
    //[ O Roeu Roupa Roma eita caramba]
    char line[300];

    //arquivo com os dados de entrada
    FILE * arquivo = fopen("input.txt", "r");
    char * ptr, * token; //inicio da linha, token
    while(fgets(line, sizeof(line), arquivo)){
        ptr = line; //inicio da linha
        line[strcspn(line, "\n")] = '\0';
        while((token = __strtok_r(ptr, " ", &ptr)) != NULL){
            if(isupper(token[0]))
                printf(token);
        }
    }
}
//1 copie o código e teste
//2 envie um Control - D do teclado para informar EOF
//3 crie um arquivo input.txt e redirecione
//4 louve a Deus porque deu certo!!!!!!!!!!!!!!!!!!!1