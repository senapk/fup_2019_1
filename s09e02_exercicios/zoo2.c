/* criar o vetor 'zoo'
ler o vetor 'zoo'

criar o vetor 'animais'

for cada elemento de 'zoo':
    se esse elemento nao existe em 'animais'
        insira elem em 'animais'

ordenar vetor 'animais'
mostrar 'animais'

criar o vetor 'zoo'
ler o vetor 'zoo'

1 3 4 2 5 6 8 9 2

 */
#include <stdio.h>
#include <stdbool.h>
int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &vet[i]);
    int cont = 0;
    for (int i = 0; i < size; i++){
        bool primeira_ocorrencia = true;
        for( int j = i - 1; j >= 0; j--){
            if(vet[i] == vet[j]){
                primeira_ocorrencia = false;
                break;
            }
        }
        if(primeira_ocorrencia)
            cont++;
    }
    printf("%d\n", cont);
}













