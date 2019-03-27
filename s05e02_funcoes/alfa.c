#include <stdio.h>
#include "xpaint.h"




void draw_square(int x, int y, int size){
    int thick = 3;
    xd_thick_line(x, y, x + size, y, thick);
    xd_thick_line(x, y, x, y + size, thick);
    xd_thick_line(x + size, y, x + size, y + size, thick);
    xd_thick_line(x, y + size, x + size, y + size, thick);
}

void draw_rect(int x, int y, int largura, int altura){
    int thick = 3;
    xd_thick_line(x, y, x + largura, y, thick);
    xd_thick_line(x, y, x, y + altura, thick);
    xd_thick_line(x + largura, y, x + largura, y + altura, thick);
    xd_thick_line(x, y + altura, x + largura, y + altura, thick);
    xd_thick_line(x, y + 2.0/3 * altura, x + largura, y + 2.0/3 * altura, thick);
}

void draw_a(int x, int y, int largura, int altura){
    draw_rect(x, y, largura, altura);
    xd_circle(x + largura /2, y + altura/2, altura/6.0);
}


int main(){
    x_open(600, 600);
    draw_a(50, 50, 100, 200);


    x_save("img");
    x_close();
}