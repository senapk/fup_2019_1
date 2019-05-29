## Apocalipse Zumbi

Cada cidade zumbi, em um turno infecta as cidades ao lado apenas nas 4 direções principais

Entrada: nl, nc, 
         matriz contendo 
            o para as cidades não infectadas, 
            x para cidades infectadas, 
            # para os obstáculos intransponíveis
Saída: todas as gerações até que não a infestação tenha estabilizado

```
>>>>>>>> 01
5 7
ooxoo#o
oooo#o#
oooo#oo
xoo#oox
ooo##o#
========
-------
ooxoo#o
oooo#o#
oooo#oo
xoo#oox
ooo##o#
-------
oxxxo#o
ooxo#o#
xooo#ox
xxo#oxx
xoo##o#
-------
xxxxx#o
xxxx#o#
xxxo#xx
xxx#xxx
xxo##x#
-------
xxxxx#o
xxxx#x#
xxxx#xx
xxx#xxx
xxx##x#
<<<<<<<<
```
