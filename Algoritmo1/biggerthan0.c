#include <stdio.h>
#include <stdlib.h>

/*
    verificar se dois números são maiores que 0
*/

int main(){
    float x,y;
    printf("Digite x: \n");
    scanf("%f", &x);
    printf("Digite y: \n");
    scanf("%f", &y);
    if (x > 0 && y > 0)
    {
        printf("Números válidos! X e y são maiores que zero.  \n");
    } if (x < 0 || y < 0) {
        printf("Números inválidos! Um dos números digitados é menor que zero. \n");
    } else {
        printf("Números inválidos! Um dos números digitados é menor que zero. \n");
    }
    
    return 0;

}