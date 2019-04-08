#include <stdio.h>

int main(){
    int N = 0, x = 0, y = 0, seg = 0;
    char direcao = '\0';
    scanf("%d %d %d %c %d", &N, &x, &y, &direcao, &seg);

    if(direcao == 'R')
        x += seg;
    else if(direcao == 'L')
        x -= seg;
    else if(direcao == 'U')
        y -= seg;
    else
        y += seg;
        
    x = x % N;
    y = y % N;
    if(x < 0)
        x += N;
    if(y < 0)
        y += N;
    printf("%d %d\n", x, y);
}