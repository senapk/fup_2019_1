#include <stdio.h>

void linha(int n_pontos, int n_elem, int elem){
    for(int i = 0; i < n_pontos; i++)
        printf(".");
    for(int i = 0; i < n_elem; i++){
        printf("A");
        if(i != n_elem - 1)
            printf(".");
    }
    for(int i = 0; i < n_pontos; i++)
        printf(".");
    puts("");
}

/* 
linha(3, 1, 4)
linha(2, 2, 4)
linha(1, 3, 4)
linha(0, 4, 4)

*/
int main(){
    int num = 0;
    scanf("%d", &num);
    for(int i = num - 1; i >= 0; i -= 1)
        linha(i, num - i, num);
}
