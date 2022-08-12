/*Fac¸a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao˜
entre os 2 vetores anteriores, ou seja, que contem os n ´ umeros dos dois vetores. N ´ ao˜
deve conter numeros repetidos.*/
#include <stdio.h>
int checa(int vetor[20],int n)
{
    for(int i=0; i<20; i++)
    {
        if(n==vetor[i])return 1;
    }
    return 0;
}
int main()
{
    int vetor1[10],vetor2[10],vetor3[20],cont=0;
    printf("Digite o primeiro vetor:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor2[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(checa(vetor3,vetor1[i])==0)
        {
            vetor3[cont]=vetor1[i];
            cont++;
        }
    }
    for(int i=0; i<10; i++)
    {
        if(checa(vetor3,vetor2[i])==0)
        {
            vetor3[cont]=vetor2[i];
            cont++;
        }
    }
    for(int i=0; vetor3[i+1]!=NULL; i++)
    {
        printf("%d\n", vetor3[i]);
    }
    return 0;
}
