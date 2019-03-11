#include <stdio.h>
#include <math.h>

int main(){
    puts("digite a idade de voces dois");
    int idade1 = 0;
    int idade2 = 0;
    
    scanf("%d %d", &idade1, &idade2);
    int soma = idade1 + idade2;
    int mult = idade1 * idade2;
    int feli = mult % soma;
    printf("%d\n", feli);
}






