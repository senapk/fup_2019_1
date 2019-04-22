#include <stdio.h>






typedef struct{ //definição
    char * nome;
    int idade;
    long int cpf;
    float altura;
} Pessoa;


void faz_algo(Pessoa pessoa){
    pessoa.idade += 1;
}


int main(){
    Pessoa davi = {"davi", 34, 004}; //inline, inicializacao
    Pessoa rebeca;
    rebeca.nome = "Rebeca";
    rebeca.idade = 15;
    rebeca.cpf = 939;
    rebeca.altura = 1.68;

    davi = (Pessoa){"David", 35, 0042, 1.78};
    Pessoa fulano = {.altura = 1.90, .idade = 54};

    printf("%f\n", davi.altura);

}
