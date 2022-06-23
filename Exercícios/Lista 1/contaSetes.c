/*
A entrada é composta por um número
inteiro não negativo.
Conte quantas vezes o número 7 aparece
nesse valor de entrada.
Obs: não pode usar laços de repetição
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaSete(long int num, int contador){
    int aux;

    if(num > 0){
        aux = num % 10;

        if(aux == 7)
            contador ++;
    }
    else{
        return contador;
    }
    
    contaSete(num/10, contador);

}

int main(){
    long int num;
    int contador = 0;

    scanf("%ld", &num);

    printf("%d\n", contaSete(num, contador));

    return 0;
}