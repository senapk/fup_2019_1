#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

    bool is_vowel(char c){
        const char * vowels = "aeiouAEIOU";
        int size = strlen(vowels);
        for(int i = 0; i < size; i++)
            if(vowels[i] == c)
                return true;
        return false;
    }

int main(){
    //strlen, strcat, strcpy, strcmp
    //tolower, toupper, isalpha
    //fgets() le linha inteira ate o \n

    //A melhor banana de Fortaleza eh do Andre
    //A Fortaleza Andre

    char palavra[50];
    while(scanf("%s", palavra) > 0){
        if(palavra[0] >= 'A' && palavra[0] <= 'Z')
            puts(palavra);
    }
}