#include <stdio.h>

int main(){
    int size = 0;
    scanf("%d", &size);
    int soma_par = 0;
    int soma_impar = 0;
    for(int i = 0; i < size; i++){
        int num = 0;
        scanf("%d", &num);
        if(num % 2 == 0)
            soma_par += num;
        else
            soma_impar += num;
    }
    if(soma_par == soma_impar)
        puts("empate");
    else if(soma_par > soma_impar)
        puts("rebeldes");
    else
        puts("soldados");
}