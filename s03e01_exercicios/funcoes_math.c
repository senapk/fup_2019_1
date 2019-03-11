#include <stdio.h>
#include <math.h>

int main(){
    float x = 4.0;
    float y = 3.6;
    int x2 = ceil(x);
    printf("ceil : %d %d\n", x2, (int) ceil(y)); ///?????
    printf("floor: %d %d\n", (int) x, (int) y);
    printf("round: %d %d\n", (int) (x + 0.5), (int) (y + 0.5));
}