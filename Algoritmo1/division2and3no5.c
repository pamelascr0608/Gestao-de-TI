#include <stdio.h>
#include <stdlib.h>

/*
    verificar se um número é divisível por dois e por 3 simultaneamente
    e não seja por 5
*/

int main(){
    int divisao_2, divisao_3, divisao_5, n ;
    printf("Digite um número: \n");
    scanf("%i", &n);
    divisao_2 = (n%2);
    divisao_3 = (n%3);
    divisao_5 = (n%5);
    if (divisao_2 == 0 && divisao_3 == 0 && divisao_5 != 0)  
    {
        printf("Esse número é válido. \n");
    } else {
        printf("Esse número não é válido. \n");
    }
    return 0;

}