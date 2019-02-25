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
    }else if(imc < 25){
        puts("Peso normal");
    }else if(imc < 30){
        puts("Sobrepeso");
    }else if(imc < 35){
        puts("Obesidade grau 1");
    }else if(imc < 40){
        puts("Obesidade grau 2");
    }else{
        puts("Obesidade grau 3");
    }
}