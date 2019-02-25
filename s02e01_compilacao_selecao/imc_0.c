#include <stdio.h>
#include <math.h>

int main(){
    float peso = 0.0;
    float altura = 0.0;
    scanf("%f %f", &altura, &peso);
    float imc = peso / pow(altura, 2);
    printf("%.2f\n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso\n");
    }
    if((imc >= 18.5) && (imc <= 24.9)){
        puts("Peso normal");
    }
    if((imc >= 25) && (imc < 30)){
        puts("Sobrepeso");
    }
    if((imc >= 30) && (imc < 35)){
        puts("Obesidade grau 1");
    }
    if((imc >= 35) && (imc < 40)){
        puts("Obesidade grau 2");
    }
    if(imc > 40){
        puts("Obesidade grau 3");
    }
}