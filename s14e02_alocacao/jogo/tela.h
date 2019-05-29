

#pragma once

#include <stdio.h>
#include "objeto.h"

const int NL = 10;
const int NC = 50;

void tela_clear(char tela[NL][NC]){
    for(int l = 0; l < NL; l++)
        for(int c = 0; c < NC; c++)
            tela[l][c] = ' ';
}

void tela_print(char tela[NL][NC]){
    for(int l = 0; l < NL; l++){
        for(int c = 0; c < NC; c++)
            printf("%c", tela[l][c]);
        printf("\n");
    }
}

void tela_draw_border(char tela[NL][NC]){
    for(int l = 0; l < NL; l++){
        tela[l][0] = '.';
        tela[l][NC - 1] = '.';
    }
    for(int c = 0; c < NC; c++){
        tela[0][c] = '.';
        tela[NL - 1][c] = '.';
    }
}

void tela_draw_object(char tela[NL][NC], Objeto * obj){
    tela[obj->y][obj->x] = obj->nome;
}
