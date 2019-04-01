
# Parte 1 - Algoritmo básico

O objetivo desse projeto é fazer o jogo 0 a 100 entre o computador e a máquina.

No jogo um deles escolhe um número em segredo e o outro tenta acertar. A cada
tentativa, quem escolheu o número precisa dizer "Maior" ou "Menor" para guiar.


# Máquina escolhendo o número

Suponha que a máquina escolhe aleatoriamente o número 728.

## Acertando
```
Escolhi um numero entre ]0, 1000[
Você tem 10 chances de acertar.
$ 20
É maior. Você tem 9 chances.
$ 900
É menor. Você tem 8 chances.
$ 500
É maior. Você tem 7 chances.
$ 728
Parabéns. Você acertou.
```

## Errando
```
Escolhi um numero entre 0 e 1000.
Você tem 10 chances de acertar.
$ 20
É maior. Você tem 9 chances.
$ 900
É menor. Você tem 8 chances.
$ 500
É maior. Você tem 7 chances.
...
Que pena. O número era 728.
```

# Parte 2
- Dê a mensagem de parabéns de acordo com o critério
    - 1 chute: você é o Chuck Noris.
    - < 4 : você o Chapolin.
    - < 9 : você é o Jaspion.
    - 10 : você é cagado.

# Parte 3
- Você começa com 100 reais.
- No começo do jogo, você aposta o tanto que quiser.
- Você recebe (10 - qtdChutes) vezes o que apostou.
- Ex:
    - apostou 50.
    - acertou no 2o chute.
    - ela recebe: (10 - 2) * 50

# Orientação

- Para gerar um número aleatório use a função rand() da biblioteca stdlib.h
- O rand() vai gerar um número entre 0 e MAXINT.

```c
#include <stdio.h>
#include <stdlib.h>//rand()

int main(){
    int number = rand() % 100;
    printf("%d\n", number);
    return 0;
}



```

# Parte 2 - Você escolhe o número

Exemplo: Usuário escolhe o 73

```
Escolha um número entre ]0 a 100[
Digite enter quando estiver pronto.
Escolhi o 50
Maior(M) ou menor(m): M
Escolhi o 75
Maior(M) ou menor(m): m
Escolhi o 60
Maior(M) ou menor(m): M

```

