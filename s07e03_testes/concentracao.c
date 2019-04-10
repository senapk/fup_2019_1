#include <stdio.h>

int main(){
    int inf = 0;
    int sup = 0;
    scanf("%d %d", &inf, &sup);

    printf("[ ");
    for(int i = inf, j = sup; i <= sup; i++, j--){
        printf("%d %d ", i, j);
    }
/*
    for(int i = 0; i <= (sup - inf); i++){
        printf("%d %d ", inf + i, sup - i);
    }
*/
    printf("]\n");
}