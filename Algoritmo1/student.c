#include <stdio.h>
#include <stdlib.h>
/*
    Ler 3 notas de um aluno e o tanto de faltas e imprimir se foi reprovado ou aprovado
    nota >= 7 e faltas >25

*/


int main(){
    int faltas;
    float nota1,nota2,nota3, media;
    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);
    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);
    printf("Digite a nota 3: \n");
    scanf("%f", &nota3);
    printf("Digite o número de faltas: \n");
    scanf("%d", &faltas);

    media = ((nota1+nota2+nota3)/3);

    if ( media >= 7 && (faltas<25) )
    {
        printf("Aluno aprovado! \n");
    } else {
        printf("Aluno reprovado! \n");
    }
    
}