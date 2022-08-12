/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/

#include <stdio.h>

int main()
{
    int vetor[6];
    printf("Digite os 6 numeros do vetor:\n");

    for(int i=0; i<6; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor invertido:\n");
    for(int i=5;i>=0; i--)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}



