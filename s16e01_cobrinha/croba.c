#define SH_FULL
#include "sh.h"


const int LADO = 50;
int NL = 12;
int NC = 16;
typedef struct{
    int x, y;
} XY;

typedef struct{
    XY pos;
    char cor;
} Bloco;

Bloco gerar_bloco_aleat(){
    const char * cores = "rgbymcov";
    Bloco bloco = {{rand() % NC, rand() % NL}, cores[rand() % strlen(cores)]};
    return bloco;
}

typedef struct{
    Bloco corpo[100];
    int size;
    int dir;
} Cobra;

Cobra gerar_cobra(){
    Cobra cobra;
    cobra.corpo[0] = gerar_bloco_aleat();
    cobra.dir = rand() % 4;
    cobra.size = 1;
    return cobra;
}

//                0   , 1 , 2    , 3
//                LEFT, UP, RIGHT, DOWN
XY vet_dir[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

void draw_square(Bloco bloco){
    sh_set_color(sh_palette[(int)bloco.cor]);
    XY pos = bloco.pos;
    pos.x *= LADO;
    pos.y *= LADO;
    for(int i = 0; i < LADO; i++)
        sh_draw_line(pos.x, pos.y + i, pos.x + LADO - 1, pos.y + i);
}

void dar_a_volta(XY * pos){
    if(pos->x == NC)
        pos->x = 0;
    if(pos->y == NL)
        pos->y = 0;
    if(pos->x == -1)
        pos->x = NC - 1;
    if(pos->y == -1)
        pos->y = NL - 1;
}



int main(){
    int speed = 300;
    sh_init(NC * LADO, NL * LADO, 30);
    int pontos = 0;
    Cobra cobra = gerar_cobra();
    Bloco food = gerar_bloco_aleat();

    int timer = 0;
    while(true){
        int c = sh_get_event();
        if(c == sh_QUIT){
            break;
        }else if(c == SDLK_RIGHT){
            cobra.dir = 2;
        }else if(c == SDLK_LEFT){
            cobra.dir = 0;
        }else if(c == SDLK_UP){
            cobra.dir = 1;
        }else if(c == SDLK_DOWN){
            cobra.dir = 3;
        }

        if(sh_timer(&timer, speed)){
            for(int i = cobra.size - 1; i >= 1; i--)
                cobra.corpo[i].pos = cobra.corpo[i - 1].pos;
            timer = SDL_GetTicks();
            cobra.corpo[0].pos.x += vet_dir[cobra.dir].x;
            cobra.corpo[0].pos.y += vet_dir[cobra.dir].y;
        }

        for(int i = 0; i < cobra.size; i++)
            dar_a_volta(&cobra.corpo[i].pos);

        if(cobra.corpo[0].pos.x == food.pos.x && cobra.corpo[0].pos.y == food.pos.y){
            cobra.corpo[cobra.size] = food;
            cobra.size += 1;
            food = gerar_bloco_aleat();
            pontos += 1;
            speed *= 0.8;
        }

        sh_set_color(sh_BLACK);
        sh_clear();
        sh_set_color(sh_WHITE);
        for(int i = 0; i < cobra.size; i++)
            draw_square(cobra.corpo[i]);
        draw_square(food);
        sh_write(0, 0, 0, "pontos %d", pontos);
        sh_display();
    }
    sh_quit();
}