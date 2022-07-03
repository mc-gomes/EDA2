/*
Faça um algoritmo de Inserção Simples
(inseriton sort Simples)
que imprima os números em ordem
crescente, separados por espaços
e o último número deve ser seguido
de quebra de linha
*/

#include <stdio.h>
#include <stdlib.h>

void insertionSortSimple(long int *v, int min, int max){
    int troca;

    for (int i = min+1; i <= max; i++){
        for(int j = i; j > min; j--){
            if(v[j] < v[j-1]){
                troca = v[j];
                v[j] = v[j-1];
                v[j-1] = troca;
            }
        }
    }
}

int main()
{
    long int num;
    int i = 0;
    
    long int *vec = malloc(sizeof(long int)*1000);
    
    while(scanf("%ld", &num) == 1){
        vec[i++] = num;
    }
    
    insertionSortSimple(vec, 0, i-1);
    
    for(int k = 0; k <= i; k++){
        if(k == i-1) {
            printf("%ld\n", vec[k]);
            break;
        }
        printf("%ld ", vec[k]);
    }
    
    free(vec);
    
    return 0;
}
