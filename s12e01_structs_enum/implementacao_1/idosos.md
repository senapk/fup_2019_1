Leia um grupo de pessoas e informe o nome da mulher mais idosa do grupo.

Cada pessoa tem nome(string até 20 char, sem whitespace), idade(int) e sexo(char 'm' ou 'f').

- Entrada
    - 1a linha: o número de pessoas, seguido por uma pessoa por linha.
- Saída
    - O nome da mulher mais idosa, ou 'nao ha mulher' se não houverem mulheres no grupo.

## Testes

```
>>>>>>>> 01
2
ana 80 f
joao 43 m
========
ana
<<<<<<<<


>>>>>>>> 02
2
jose 80 m
joao 43 m
========
nao tem mulher
<<<<<<<<


>>>>>>>> 03
3
joao 43 m
ana 80 f
melissa 34 f
========
ana
<<<<<<<<


>>>>>>>> 04
3
joao 88 m
ana 80 f
melissa 84 f
========
melissa
<<<<<<<<

```

## Código base

Utilize esse código e preencha apenas a função solicitada.

```c
#include <stdio.h>
#include <stdbool.h>
typedef struct{
    char nome[20];
    int idade;
    char sexo;
} Pessoa;

const char * search_old_woman(Pessoa pessoas[], int size){
    //implemente seu código aqui
    return "nao tem mulher";
}

int main(){
    int size;
    scanf("%d", &size);
    Pessoa pessoas[size];
    for(int i = 0; i < size; i++)
        scanf("%s %d %c", pessoas[i].nome, &pessoas[i].idade, &pessoas[i].sexo);
    printf("%s\n", search_old_woman(pessoas, size));
}
```


<!---

>>>>>>>> 05
3
joao 88 m
ferrim 80 m
melios 84 m
========
nao tem mulher
<<<<<<<<


>>>>>>>> 06
7
maria 11 f
joao 43 m
francisco 12 m
meire 71 f
sergio 14 m
strange 81 m
mogli 45 m
========
meire
<<<<<<<<


>>>>>>>> 07
6
maria 11 f
joao 43 m
francisco 12 m
meire 71 f
strange 81 m
sergio 101 m
========
meire
<<<<<<<<


>>>>>>>> 08
5
maria 99 f
strange 81 m
joao 43 m
meire 71 f
sergio 14 m
========
maria
<<<<<<<<


>>>>>>>> 09
7
mario 80 m
joao 43 m
francisco 12 m
meire 73 f
sergio 72 f
strange 81 m
mogli 45 m
========
meire
<<<<<<<<

--->

