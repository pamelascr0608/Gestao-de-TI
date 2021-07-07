#include <stdio.h>
#include <stdlib.h>
/*
    Faça um rpograma que leia 3 comprimentos (x,y,z) e responda se eles formam um triângulo
    se x < y + z e y < x + z e z < x + y

*/

int main (){
    float x,y,z;
    printf("Digite o comprimento de x: \n");
    scanf("%f", &x);
    printf("Digite o comprimento de y: \n");
    scanf("%f", &y);
    printf("Digite o comprimento de z: \n");
    scanf("%f", &z);
    if((x < y + z) && (y < x + z) && (z < x + y) ) {
        printf("É um triângulo! \n");
    } else {
        printf("Não é um triângulo!\n");
    }
    return 0;

}