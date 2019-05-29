#include <stdio.h>
#include <stdbool.h>
#include "lib.h"

int main(){
    int size;
    scanf("%d", &size);
    Pessoa pessoas[size];
    for(int i = 0; i < size; i++)
        scanf("%s %d %c", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].sexo);
    printf("%s\n", search_old_woman(pessoas, size));
}
