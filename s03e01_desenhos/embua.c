#include "xpaint.h"

int main(){
    int largura = 600, altura = 300;
    /* cria um bitmap de 600x600 */
    x_open(largura, altura); 
    /* escreve usando a font default na posicao x=50, y=30 */
    /* utilizando o mesmo formato do printf */
    x_clear(WHITE);
    xs_color(BLACK);

    int qtd = 10;
    int x = 50;
    int y = altura;
    int fase = 1;
    xs_font_size(20);
    while(qtd > 0){
        xd_line(x, y, x, y - 50 * fase);
        xd_line(x, y - 50 * fase, x + 50, y - 50 * fase);
        x_write(x - 25, y + 25, "%d", qtd);
        x += 50;
        y -= 50 * fase;
        if(y <= 50)
            fase *= -1;
        qtd -= 1;
    }
    
    /* salva no arquivo exemplo.png */
    x_save("embua");
    /* libera os recursos alocados */
    x_close();
    return 0;
}