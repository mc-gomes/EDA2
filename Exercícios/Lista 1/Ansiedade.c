/*
Cada conjunto de 10 palavras (uma por linha)
é composto pelas palavras 'sim' e 'nao'.
Conte quantas vezes a palavra 'sim' apareceu
duas ou mais vezes dentro de um conjunto.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ctPalavras = 1, ctSim = 0, ctTotal = 0;
    char entrada[4];
    
    while (scanf("%s", entrada) == 1){
        if(strcmp(entrada, "sim") == 0 && ctPalavras <= 10){
            ctSim ++;
        }
        
        if(ctPalavras == 10){
            if(ctSim >= 2)
                ctTotal++;
            
            ctPalavras = 0;
            ctSim = 0;
        }
        
        ctPalavras ++;
    }
    
    printf("%d\n", ctTotal);
    

    return 0;
}
