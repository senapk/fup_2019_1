#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_aberto(int menor, int maior){
    return rand() % (maior - menor) + menor;
}

int main(){
    srand((unsigned) time(NULL));
    for(int i = 0; i < 10; i++)
        printf("%d,", rand_aberto(1, 3));

}