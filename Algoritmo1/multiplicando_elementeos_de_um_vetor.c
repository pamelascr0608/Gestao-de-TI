
#include <stdio.h>

int main()
{
    int num;
    float vet[10], vector_number;
    printf("Digite o número que deseja multiplicar pelo vetor:");
    scanf("%d", &num);
    printf("Digite os números do vetor: \n");
    
    for (int i=0;i<=9;i++) {
        scanf("%f", &vector_number);
        vet[i]= vector_number*num;
        
    }
    printf("Vetor = ");
    for (int i=0;i<=9;i++){
        printf(" %.2f", vet[i]);
    }
    return 0;
}