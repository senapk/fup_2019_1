#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define getline(line, from) do{fgets(line, sizeof(line), from);line[strcspn(line, "\n")] = '\0';}while(0);
#define get_token(ptr, sep) __strtok_r(ptr, sep, &ptr)

int main(){
    char line[300];
    char * ptr, * token; //inicio da linha, token
    while(true){
        getline(line, stdin);
        if(line == NULL)
            break;
        ptr = line; //inicio da linha
        while((token = get_token(ptr, " ")) != NULL){
            if(isupper(token[0]))
                printf(token);
        }
    }
}
//1 copie o código e teste
//2 envie um Control - D do teclado para informar EOF
//3 crie um arquivo input.txt e redirecione
//4 louve a Deus porque deu certo!!!!!!!!!!!!!!!!!!!1