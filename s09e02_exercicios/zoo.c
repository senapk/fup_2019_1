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

    int vaux[size];
    int vaux_size = 0;
    
    for (int i = 0; i < size; i++){
        int j = 0;
        for(; j < vaux_size; j++)
            if(vet[i] == vaux[j])
                break;
        if(j == vaux_size){
            vaux[j] = vet[i];
            vaux_size += 1;
        }
    }
    printf("%d\n", vaux_size);
}













