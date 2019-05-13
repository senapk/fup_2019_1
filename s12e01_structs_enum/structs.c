#include <stdio.h>



struct Ponto{
    int x; //4 bytes
    int y; //4 bytes
    int z;
};

typedef struct Ponto Point;

typedef int Interasso;

//forma compacta de unir struct e typedef

typedef struct _Pessoa{
    char nome[50];
    int idade;
} Pessoa;


int main(){
    struct Ponto p;
    p.y = 8;
    p.x = 6;//acesso individual

    struct Ponto p2 = {3, 7}; //inline, apenas na criação

    struct Ponto p3 = {.z = 1}; //c99 

    Interasso x = 4;
    Interasso y = 8;
    Point p4 = {x, y, 7};

    Pessoa pessoa;
    strcpy(pessoa.nome, "fulano");
    pessoa.idade = 57;

    Pessoa p2 = {"sicrano", 62};
}