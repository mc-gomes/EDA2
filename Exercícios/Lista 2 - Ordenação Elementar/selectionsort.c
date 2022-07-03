/*
Faça um algoritmo de Seleção
(selection sort) que imprima 
os números em ordem crescente, 
separados por espaços e o 
último número deve ser seguido
de quebra de linha
*/

#include <stdio.h>
#include <stdlib.h>

void selectionSort(long int *v, int min, int max){
    int troca;
    
    for (int i = min; i < max; i++){
        int menor = i;
        for(int j = i + 1; j <= max; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        troca = v[menor];
        v[menor] = v[i];
        v[i] = troca;
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
    
    selectionSort(vec, 0, i-1);
    
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
