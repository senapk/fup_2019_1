#include <stdio.h>

/*
int main(){
    int main(){
    for(int i = 1; i <= 10; i += 1){
        for(int a = 1; a <= 5; a += 1){
            printf("%d*%02d=%02d ", a, i, a * i);
        }
        puts("");
    }
}
*/
int main(){
    int i = 1;
    while(i <= 10){
        int a = 1;
        while(a <= 5){
            printf("%d*%02d=%02d ", a, i, a * i);
            a += 1;    
        }
        puts("");
        i += 1;
    }
}
