#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("[ ");
    for(int ia = a, ib = b; ia <= b; ia += 1, ib -= 1){
        printf("%d %d ", ia, ib);
    }
    printf("]\n");
    return 0;
}

