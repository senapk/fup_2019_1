




#include <stdio.h>
#include <stdbool.h> //bool e true e false

bool eh_primo(int valor){
    for(int i = 2; i < valor; i++){
        if(valor % i == 0)
            return false;
    }
    return true;
}

int main(){
    int num = 0;
    scanf("%d", &num);
    if(eh_primo(num))
        puts("eh primo");
    else
        puts("nao eh primo");

}


#if 0
    int i = 2;
    for(; i < num; i++){
        if(num % i == 0){
            puts("nao eh primo");
            break;
        }
    }
    if(i == num)
        puts("eh primo");
#endif