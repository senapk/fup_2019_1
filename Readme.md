# Fup David Sena 2019.1

## Links
- [ZAP](https://chat.whatsapp.com/Dap5w1KzF3HAQPzk22FDOK)
    - Entre no grupo do zap para tirar dúvidas sobre a disciplina
- [Planilha de Pontos](https://docs.google.com/spreadsheets/d/1p15OZdETdcwFwGUB1vCrJGyCg3puczo9xeSQD4xW0qA/edit?usp=sharing)
    - Anote a sua pontuação no Curso do Moodle Semana a Semana
- [Moodle](moodle.quixada.ufc.br)
    - Crie sua conta no Moodle
    - Procure o curso "Fup is Fun"
    - Entre no curso e começe a fazer os exercícios
- [Playlist Youtube](https://www.youtube.com/watch?v=JmLub7HcTNU&list=PLqwyjBSVOHRyaq1DAKJkuKf2GKWfJD1b1)
    - Playlist do youtube com todas as aulas da disciplina
- [Compilador Online](repl.it)
    - Compilador online para rodar seus códigos até você conseguir configurar seu computador.
- Todos os dias no horário do almoço de 12:30 até 13:30 tem monitoria de programação. **Almoço com código**.

##

- Atividades
- conseguir acesso ao si3
    - colocar foto
- conseguir acesso ao moodle.quixada.ufc.br
    - se matricular no curso "FUP is FUN"
    - colocar sua foto no moodle
- começar a estudar pela apostila
- configurar o ambiente de desenvolvimento

## Configurar ambiente

- Instalar linux
    - visual studio code
    - sudo apt install build-essential git
- Instalação windows
    - Vscode
        - https://code.visualstudio.com/docs/?dv=win
    - Git for windows
        - https://gitforwindows.org/
    - Mingw
        - https://osdn.net/frs/redir.php?m=c3sl&f=mingw%2F68260%2Fmingw-get-setup.exe

## Instalando o MinGW
- Execute o instalador do Mingw
    - instale no destino padrão C:\MinGW
- Escolha os pacotes
    - mingw-developer-tookit-bin
    - mingw32-gc-g++-bin
- Vá em Instalação
    - Apply Changes
    - Apply
- Espere e tenha fé

## Configurando o MinGW no Path

- Control Panel, Advanced System Settings
- Advanced tab, Environment Variables
- System Variables (no quadrado de baixo, não no de cima)
- Selecione a variável "PATH" (no quadrado de baixo)
- Edit
- Adicione em novas linhas 
    - C:\MinGW\bin
    - C:\MinGW\msys\1.0\bin
- abra um **NOVO** cmd e teste os seguintes comandos
    - bash
    - gcc --version
    - make --version

## Visual Studio Code
- Rode o instalador do vscode.
- Abra a pasta do seu projeto.
- Abra o terminal integrado com control '
- Crie o arquivo Makefile
```
CC = gcc
CFLAGS = -Wall -std=c99 -g
```

- Compile seu código e execute
```
$ ls
main.c Makefile
$ make main
gcc -Wall -std=c99 -g main.c -o main
$ ./main
hello world
```

## Configurando o debug
- Lembre de Compilar com a flag -g
- Clique no potó
- Configure o arquivo executável colocando o nome do seu arquivo executável
- Configure o path do **gdb.exe**
