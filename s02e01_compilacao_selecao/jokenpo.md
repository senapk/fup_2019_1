### Descrição

Você está tentando ensinar sua tartaruga RUFUS a jogar jokenpo.

Faça uma função que retorne o resultado do jogo pedra, papel e tesoura para que RUFUS tenha algo divertido para fazer durante os seus banhos de sol no açude do Cedro.

---
Os jogadores podem escolher entre R(rock), P(paper) e S(scissor), que correspondem ao nosso pedra, papel e tesoura.

Entrada:
- 1a linha: opção do jogador 1. 
- 2a linha: opcao do jogador 2. 

Saída:
- O jogador que ganhou ou empate(jog1, jog2, empate)

```
>>>>>>>>
R
P
========
jog2
<<<<<<<<

>>>>>>>>
R
R
========
empate
<<<<<<<<

>>>>>>>>
R
S
========
jog1
<<<<<<<<

>>>>>>>>
P
P
========
empate
<<<<<<<<

>>>>>>>>
P
R
========
jog1
<<<<<<<<

>>>>>>>>
P
S
========
jog2
<<<<<<<<

>>>>>>>>
S
S
========
empate
<<<<<<<<

>>>>>>>>
S
P
========
jog1
<<<<<<<<

>>>>>>>>
S
R
========
jog2
<<<<<<<<
```