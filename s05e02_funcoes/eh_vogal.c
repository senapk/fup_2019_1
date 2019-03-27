




#include <stdio.h>
#include <stdbool.h> //bool e true e false

bool eh_vogal(char valor){
    if(valor == 'a' || valor == 'e' || valor == 'i' || valor == 'o' || valor == 'u')
        return true;
    return false;
}

int main(){
    char value = 0;
    scanf(" %c", &value);
    if(eh_vogal(value))
        puts("eh vogal");
    else
        puts("nao eh vogal");

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