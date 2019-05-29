
#include <stdio.h>
#include <stdlib.h>
#include "objeto.h"
#include "tela.h"

int main(){
    Objeto * player = objeto_create(4, 5, '@');
    Objeto * pedra = objeto_create(9, 3, '#');
    Objeto * poste = objeto_create(9, 7, 'T');
    
    char tela[NL][NC];
    
    while(1){
        //processar eventos
        char acao = ' ';
        scanf(" %c", &acao);

        //realizar logica de jogo
        objeto_move(player, acao);
        objeto_move(pedra, acao);

        tela_clear(tela);
        tela_draw_border(tela);

        tela_draw_object(tela, pedra);
        tela_draw_object(tela, player);
        tela_draw_object(tela, poste);

        tela_print(tela);
    }

    objeto_destroy(player);
    objeto_destroy(pedra);
    objeto_destroy(poste);
}