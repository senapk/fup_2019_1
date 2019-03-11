#include <stdio.h>

int main(){
    int qtd = 0;
    int cesta = 0;
    scanf("%d %d", &qtd, &cesta);
    int total = qtd / cesta;
    if(qtd % cesta > 0)
        total += 1;
    printf("%d\n", total);
}


