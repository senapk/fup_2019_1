#include <stdio.h>
#include <math.h>




int sou_global = 6;

int soma(int, int); //prototipo, declaracao
int fazer_algo(int y, int x, int z);

int main(){
    int x = 0;
    scanf("%d", &x);
    printf("%d\n", sou_global);
}







[3 - 8]
rand_int(3, 9)
int rand_int(int min, int max){
    return rand % (max - min) + min; 
}


int fazer_algo(int y, int x, int z){ //definicao
    return soma(x, y) + z + sou_global;
}
int soma(int a, int b){
    return a + b;
}
