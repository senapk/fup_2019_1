#include <stdio.h>
#include <stdbool.h> //bool e true e false

int main(){
    int num = 0;
    scanf("%d", &num);
    bool eh_primo = true;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            puts("nao eh primo");
            eh_primo = false;
            break;
        }
    }
    if(eh_primo)
        puts("eh primo");
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