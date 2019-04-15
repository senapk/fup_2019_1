#include <stdio.h>










int pos_fixado(int a){
    int aux = a;
    a++;
    return aux;
}

int pre_fixado(int a){
    a += 1;
    return a;
}


int main(){
    int x = 5;
    int y = x++ - x--;
    printf("%d\n", y);    
}