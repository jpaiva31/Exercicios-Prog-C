/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/
#include <stdio.h>

int main()
{
    int vetor[6];
    printf("Digite os 6 numeros do vetor:\n");
    for(int i=0; i<6; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<6; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

