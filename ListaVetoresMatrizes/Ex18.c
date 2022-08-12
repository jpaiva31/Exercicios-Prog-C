/*Fac¸a um programa que leia um vetor de 10 numeros. Leia um n ´ umero ´ x. Conte os
multiplos de um n ´ umero inteiro ´ x num vetor e mostre-os na tela. */
#include <stdio.h>

int main()
{
    int vetor[10],n;
    printf("Digite os 10 numeros do vetor:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero n:\n");
    scanf("%d", &n);
    printf("Numeros multiplos de n:\n");
    for(int i=0; i<10; i++)
    {
        if(vetor[i]%n==0)printf("%d\n", vetor[i]);
    }

    return 0;
}
