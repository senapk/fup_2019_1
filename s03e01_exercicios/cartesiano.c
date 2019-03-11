#include <stdio.h>

int main(){
    int ang = 0;
    scanf("%d", &ang);
    ang = ang % 360;
    if(ang < 0)
        ang += 360;
    printf("%d\n", ang);    
}