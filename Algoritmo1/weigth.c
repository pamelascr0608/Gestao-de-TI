#include <stdio.h>
#include <stdlib.h>
// Tendo como dados de entrada a altura e o sexo de uma pessoa,
// construa um programa que calcule seu peso ideal, considerando:
// homem (72.7*h) - 58
// mulher = (62.1*h) - 44.7


int main(){
    char sexo;
    float altura, peso_ideal;
    printf("Digite seu sexo, sendo M para masculino e F para feminino: \n");
    scanf("%s", &sexo);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    if (sexo == 'F' || sexo == 'f')
    {
        peso_ideal = ((62.1 * altura ) - 44.7);
        printf("Seu peso ideal, em Kg, é %.2f \n: ", peso_ideal);
    } if (sexo == 'M' || sexo == 'm')
    {
        peso_ideal = ((72.7 * altura) - 58);
        printf("Seu peso ideal, em Kg, é: %.2f \n: ", peso_ideal);
    } else {
        printf("Digite um formato correto para o sexo.");
    }
    
    
    return 0;
}