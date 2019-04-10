## Jogo dos pião

No jogo de pião lá de Ocara o mói de peia funciona assim:
- N jogadores se reúnem cada um com seu pião.
- Um nobre rapaz faz uma rodinha na areia.
- Todos os participantes jogam o pião na rodinha um de cada vez e eles decoram a distância que o pião caiu do centro.
- Quem ficou mais perto do centro ganha, desde que tenha jogado dentro da roda.
- Quem ficou mais longe do centro perde.

## I/O

- Entrada
    - 1a linha: N e C, sendo N a quantidade de jogadores e C a circunferência do círculo.
    - 2a linha: As N jogadas dos jogadores representadas por um número inteiro, que pode ser positivo ou negativo representando a distância do centro.
- Saída
    - 1a linha: o número do ganhador (1o jogador tem índice 0) ou "nenhum" se nenhum conseguiu acertar dentro da circunferência.
    - 2a linha: o número do perdedor (se houver empate, será o último jogador empatado, na ordem das jogadas).

## Testes

```
>>>>>>>>
30 3
-35 15 22
========
1
0
<<<<<<<<

>>>>>>>>
30 3
-35 32 40
========
nenhum
2
<<<<<<<<

>>>>>>>>
30 3
-35 -36 36
========
nenhum
2
<<<<<<<<

>>>>>>>>
30 3
-25 -26 24
========
2
1
<<<<<<<<


```

