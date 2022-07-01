/*
Escreva um programa que leia N strings
e imprima a soma de todos os algarismos 
presentes em cada uma delas.
Ex:
    2
    fsdf8fd4sf
    d6dsg3dgs52sd
    --------
    12
    16
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N, soma = 0;
    char palavra[100];

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%s", palavra);

        for (int j = 0; j < strlen(palavra); j++){
            if(palavra[j] > 48 && palavra[j] <= 57){
                // 48 = '0' ... 57 = '9' na tabela ascii
                
                soma += palavra[j] - '0';
                // ex: caso palavra[j] = '9' , ao fazer essa operação
                // é como se fosse 57 - 48 = 9 (o num e não a string)
            }
        }

        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}