#include <stdio.h>
#include <stdlib.h>

/*
    x/y se y=!0
*/

int main(){
    int x,y, divisao;
    printf("Digite x: \n");
    scanf("%i", &x);
    printf("Digite y: \n");
    scanf("%i", &y);
    

    if (y != 0)
    {
        divisao = (x/y);
        printf("É divisível. Resultado: %i \n", divisao);
        
    } else {
        printf("Divisão por 0 não é válida. \n");
    return 0;
    }
}