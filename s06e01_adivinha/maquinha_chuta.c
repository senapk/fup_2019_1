




inf = 0
sup = 1000
puts("escolha mentalmente um numero ]0, 1000[ e digite enter")
getchar()
ganhei = false
faca 10 vezes:
    numero = escolhe aleatoriamente numero entre ]inf, sup[
    printf("escolhi o numero %d no intervalo ]inf, sup[")
    mostre numero e pergunte se Maior, Menor ou Igual
    se igual
        ganhei = true
    senao se menor
        sup = numero
    senao
        inf = numero

se nao ganhou
    puts("nao ganhei")
senao
    puts("eu ganhei")