#include <stdlib.h> //rand() e srand()
#include <time.h> //time() 
#include <stdio.h>

int main(){
    srand(time(NULL));
    int x = rand() % 101;
    printf("%d\n", x);
}