#include <stdio.h>

int main(){
    puts("Quantos anos você tem?");
    int idade = 0;
    scanf("%i", &idade);
    printf("Parabens, eh lindo ter %i anos!\n", idade);

    puts("Qual sua altura?");
    float altura = 0.0;
    scanf("%f", &altura);
    printf("Que bom, voce deve ser um xuxu com %.2f de altura\n", altura);

    int dia = 0;
    int mes = 0;

    puts("Digite dia e mes de nascimento");
    scanf("%d %d", &dia, &mes);
    printf("É muito bom nascer no dia %02d/%02d\n", dia, mes);
}






