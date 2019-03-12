#include <stdio.h>

int main(){
    char op1 = 0;
    char op2 = 0;
    int nvit1 = 0;
    int nvit2 = 0;
    int nempates = 0;
    
    while((nvit1 < 3) && (nvit2 < 3)){
        puts("PLACAR");
        printf("vit1: %d, vit2: %d, emp: %d\n", nvit1, nvit2, nempates);

        do{
            puts("Jog1: Digite r(rock), p(paper), s(scissor):");
            scanf(" %c", &op1);
        }while((op1 != 'r') && (op1 != 's') && (op1 != 'p'));
        
        do{
            puts("Jog2: Digite r(rock), p(paper), s(scissor):");
            scanf(" %c", &op2);
        }while((op2 != 'r') && (op2 != 's') && (op2 != 'p'));

        if(op1 == op2){
            puts("empate");
            nempates += 1;
        }else if(((op1 == 'r') && (op2 == 's')) || 
                ((op1 == 'p') && (op2 == 'r')) ||
                ((op1 == 's') && (op2 == 'p'))){
            puts("Jogador 1 ganhou");
            nvit1 += 1;
        }else{
            puts("Jogador 2 ganhou");
            nvit2 += 1;
        }
    }
    puts("PLACAR");
    printf("vit1: %d, vit2: %d, emp: %d\n", nvit1, nvit2, nempates);
}
