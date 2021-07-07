#include <stdio.h>
#include <stdlib.h>

/*
    verificar se é maior de idade
*/

int main(){
    int idade;
    printf("Digite a idade: \n");
    scanf("%i", &idade);
    
    if (idade >= 18 )
    {
        printf("Maior de idade!  \n");
    } else {
        printf("Menor de idade! \n");
    }
    
    return 0;

}