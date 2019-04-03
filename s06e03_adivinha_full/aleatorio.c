#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
    srand((unsigned) time(NULL));
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);
    for(int i=1 ; i <= 10 ; i++){
        printf("%d ", rand() % 101);
    }
}