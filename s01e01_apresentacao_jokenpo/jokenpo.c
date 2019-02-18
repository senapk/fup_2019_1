#include <stdio.h> //fazer entrada e saida





int main(){
    puts("Pedra(1), Papel(2), Tesoura(3)");
    puts("Digite a opcao do primeiro jogador:");
    int j1;
    scanf("%i", &j1);
    puts("Digite a opcao do segundo jogador:");
    int j2;
    scanf("%i", &j2);
    if(j1 == j2)
        puts("empate");
    else if(((j1 == 1) && (j2 == 3))||
            ((j1 == 2) && (j2 == 1))||
            ((j1 == 3) && (j2 == 2)))
        puts("jogador 1 ganhou");
    else
        puts("jogador 2 ganhou");
}

