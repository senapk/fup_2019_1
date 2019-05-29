




- Entrada:
    - qtd de figurinhas diferentes
    - em cada linha: o índice da figura e o numero de repetidas

-Wall



typedef struct{
    int ind;
    int qtd;
}Card;

5
1 3
3 2
5 8
8 3
9 1
quantas figurinhas no total?
quais figurinha ele não tem nenhum exemplar [0, 10]?
qual figurinha é a mair repetida










int main(){
    int vet1[4];

    int vet2[4] = {4, 3, 2, 6}; //inline -> so inicializacao
    
    int vet3[] = {5, 4, 7, 8, 9}; //melhor
    int size3 = sizeof(vet3)/sizeof(int);

    //ERRADO
    //vet1 = {3, 4, 6, 7}; //atribuicao

    int size = 0;
    scanf("%d", &size);
    int vet4[size];
    for(int i = 0; i < size; i++) //le o vetor
        scanf("%d", &vet4[i]);

    for(int i = 0; i < size; i++) //mostra o vetor
        printf("%d ", vet4[i]);

    int soma = 0;
    for(int i = 0; i < size; i++) //mostra o vetor
        soma += vet4[i];
    printf("%d\n", soma);

    int cont_0 = 0;
    for(int i = 0; i < size; i++) //mostra o vetor
        if(vet4[i] == 0)
            cont_0++;
    printf("%d\n", cont_0);

    int cont_0 = 0;
    for(int i = size - 1; i >= 0; i--) //mostra o vetor
        printf("%d ", vet4[i]);
    printf("%d\n", cont_0);

}