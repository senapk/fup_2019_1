#include "xpaint.h"

int main(){
    int largura = 600, altura = 500;
    /* cria um bitmap de 600x600 */
    x_open(largura, altura); 
    /* escreve usando a font default na posicao x=50, y=30 */
    /* utilizando o mesmo formato do printf */
    
    x_clear(GREEN);
    xs_color(BLACK);
    xd_ellipse(230, 270, 260, 340);
    xd_ellipse(231, 271, 261, 341);
    xs_color(YELLOW);
    xd_filled_rect(100, 300, 500, 450);
    xs_color(WHITE);
    xd_filled_circle(200, 450, 50);
    xs_color(YELLOW);
    xd_filled_circle(200, 450, 35);
    xs_color(WHITE);
    xd_filled_circle(400, 450, 50);
    xs_color(YELLOW);
    xd_filled_circle(400, 450, 35);
    xs_color(GREEN);
    xd_filled_triangle(100, 300, 200, 300, 100, 350);
    xs_color(BLACK);
    xd_thick_line(200, 300, 230, 230, 4);
    xd_circle(300, 250, 30);
    xd_circle(300, 250, 29);
    xd_circle(300, 250, 28);

    
    /* salva no arquivo exemplo.png */
    x_save("figura_base");
    /* libera os recursos alocados */
    x_close();
    return 0;
}