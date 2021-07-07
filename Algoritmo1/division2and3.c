#include <stdio.h>
#include <stdlib.h>

/*
    verificar se um número é divisível por dois e por 3 simultaneamente

*/

int main(){
    int divisao_2, divisao_3, n;
    printf("Digite um número: \n");
    scanf("%i", &n);
    divisao_2 = (n%2);
    divisao_3 = (n%3);

    if (divisao_2 == 0 && divisao_3 == 0)
    {
        printf("É divisível por 2 e por 3 simultaneamente. \n");
    } else {
        printf("Não é divisível por 2 e por 3 simultaneamente. \n");
    }
    return 0;

}