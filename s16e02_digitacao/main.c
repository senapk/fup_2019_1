#define SH_FULL
#include "sh.h"

typedef struct{
    int x, y;
    char value;
} Letter;

Letter gerar_letter(int nc){
    Letter letter = {rand() % nc, 0, 'a' + rand() % 26};
    return letter;
}

int main(){
    sh_init(901, 601);
    sh_grid_init(50, 1);
    int nl = 601/50;
    int nc = 901/50;

    Letter vet[50];
    int vet_size = 0;
    vet[vet_size] = gerar_letter(nc);
    vet_size += 1;
    int timer = 0;
    int timer_new = 0;
    int ev;
    bool is_open = true;
    while(is_open){
        while((ev = sh_input_get()) != 0){
            if(ev == sh_EVQUIT)
                is_open = false;
            for(int i = 0; i < vet_size; i++){
                if(ev == vet[i].value)
                    vet[i] = gerar_letter(nc);
                
            }
        }
        if(sh_timer(&timer_new, 5000)){
            vet[vet_size] = gerar_letter(nc);
            vet_size += 1;
        }

        if(sh_timer(&timer, 500)){
            for(int i = 0; i < vet_size; i++){
                vet[i].y += 1;
                if(vet[i].y == nl)
                    is_open = false;
            }
        }
        sh_color_load('k');
        sh_clear();

        for(int i = 0; i < vet_size; i++){
            sh_color_load('w');
            sh_grid_cplot(vet[i].y, vet[i].x);
            char texto[2];
            texto[0] = vet[i].value;
            texto[1] = '\0';
            sh_color_load('b');
            sh_grid_tplot(vet[i].y, vet[i].x, texto);
        }
        sh_display();
    }
    sh_quit();
}