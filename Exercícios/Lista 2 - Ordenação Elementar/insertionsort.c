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

void insertionSort(long int *v, int min, int max){

    for (int i = max; i > min; i--){
        if(v[i] < v[i-1]){ // analisa e coloca o menor elemento
            int troca;
            troca = v[i];  // na primeira posição, começando a
            v[i] = v[i-1]; // iteração pelo fim do vetor
            v[i-1] = troca;
        }
    }

    for(int i = min + 2; i <= max; i++){
        long int aux = v[i];
        int j = i - 1; // pois em 'i' já está o menor elemento

        while(aux < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}

int main()
{
    long int num;
    int i = 0;
    
    long int *vec = malloc(sizeof(long int)*50000);
    
    while(scanf("%ld", &num) == 1){
        vec[i++] = num;
    }
    
    insertionSort(vec, 0, i-1);
    
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
