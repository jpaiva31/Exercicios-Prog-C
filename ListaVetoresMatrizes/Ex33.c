/*Fac¸a um programa que leia um vetor de 15 posic¸oes e o compacte, ou seja, elimine as ˜
posic¸oes com valor zero. Para isso, todos os elementos ˜ a frente do valor zero, devem ser `
movidos uma posic¸ao para tr ˜ as no vetor.*/

#include <stdio.h>

int main()
{
    int vetor[15];
    printf("Digite o vetor de 15 posicoes\n");
    for(int i=0; i<15; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<15; i++)
    {
        if(vetor[i]==0)
        {
            for(int j=14; j>i; j--)
            {
                if(vetor[j]!=0)
                {
                    int aux=vetor[j];
                    vetor[j]=vetor[i];
                    vetor[i]=aux;
                }
            }
        }
    }
    for(int i=0; i<15; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
