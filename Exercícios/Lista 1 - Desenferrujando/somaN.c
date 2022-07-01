/*
Ler um conjunto de N números da entrada padrão 
(geralmente o teclado) e imprimir uma única
linha contendo a soma de todos eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, num, soma = 0;

    scanf("%d", &N);

    if(N >= 0 && N <= 50){
        for(int i = 0; i < N; i++){
            scanf("%d", &num);
            soma = soma + num;
        }
        printf("%d\n", soma);
    }

    return 0;
}