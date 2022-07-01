/*
Para este problema você deverá ler diversos números
e imprimir a quantidade de números lidos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, ct = 0;

    while (scanf("%d", &n) == 1) // "enquanto a leitura pelo scanf der certo"
        ct++;
    
    printf("%d\n", ct);
    
    return 0;
}