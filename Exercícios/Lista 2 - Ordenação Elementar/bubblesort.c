/*
Faça um algoritmo de Bubble Sort
que imprima os números em ordem
crescente, separados por espaços
e o último número deve ser seguido
de quebra de linha
*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(long int *v, int min, int max){
    int aux;
    
    for (int i = min; i < max; i++){
        for(int j = min + 1; j <= max; j++){
            if(v[j - 1] > v[j]){
                aux = v[j];
                v[j] = v[j - 1];
                v[j-1] = aux;
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
    
    bubbleSort(vec, 0, i-1);
    
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
