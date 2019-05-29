

#pragma once

#include <stdlib.h>

typedef struct{
    int x, y;
    char nome;
} Objeto;

Objeto * objeto_create(int x, int y, char nome){
    Objeto * obj = (Objeto*) malloc(sizeof(Objeto));
    (*obj).x = x;
    obj->y = y;
    obj->nome = nome;
    return obj;
}

void objeto_destroy(Objeto * obj){
    free(obj);
}

void objeto_move(Objeto * obj, char dir){
    if(dir == 'a')
        obj->x -= 1;
    else if(dir == 'd')
        obj->x += 1;
    else if(dir == 'w')
        obj->y -= 1;
    else if(dir == 's')
        obj->y += 1;
}