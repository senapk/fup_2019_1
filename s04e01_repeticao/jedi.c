

#include <stdio.h>


int main(){
    int size = 0;
    int sum_jedi = 0;
    int sum_sith = 0;
    scanf("%d", &size);

    for(int i = 0; i < size/2; i++){
        int value = 0;
        scanf("%d", &value);
        sum_jedi += value;
    }
    for(int i = 0; i < size/2; i++){
        int value = 0;
        scanf("%d", &value);
        sum_sith += value;
    }

    if(sum_jedi == sum_sith)
        puts("empate");
    else if (sum_jedi > sum_sith)
        puts("jedi");
    else
        puts("sith");

}

