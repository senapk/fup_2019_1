#include <stdio.h>




int main(){
    char op1 = '0';
    char op2 = '0';
    scanf(" %c %c", &op1, &op2);
    if(op1 == op2){
        puts("empate");
    }else if(((op1 == 'R') && (op2 == 'S')) || 
             ((op1 == 'S') && (op2 == 'P')) ||
             ((op1 == 'P') && (op2 == 'R'))){
        puts("jog1");
    }else{
        puts("jog2");
    }
}
