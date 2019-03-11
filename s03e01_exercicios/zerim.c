#include <stdio.h>

int main(){
    int op1 = 0;
    int op2 = 0;
    int op3 = 0;
    int op4 = 0;
    scanf("%d %d %d %d", &op1, &op2, &op3, &op4);
    int soma = op1 + op2 + op3 + op4;
    if(soma == 0)
        puts("nenhum");
    else{
        int ganhador = (soma - 1) % 4 + 1;
        printf("jog%d\n", ganhador);
    }
}

    