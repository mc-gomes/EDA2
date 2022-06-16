/*
Ler 2 números da entrada padrão (geralmente o teclado) e 
imprimir uma única linha contendo a soma destes 2 números.
*/
#include <stdio.h>

int main (){
    
    int n1, n2, soma = 0;

    scanf("%d\n%d", &n1, &n2);

    soma = n1 + n2;

    printf("%d\n", soma);

    return 0;
}