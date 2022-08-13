/*Escreva um programa que leia um numero inteiro positivo ´ n e em seguida imprima n
linhas do chamado Triangulo de Pascal:*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int vetor[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            vetor[i][j]=0;
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0&&j==0)
            {
                vetor[i][j]=1;
                break;
            }
            else
            {
                if(j==0)
                {
                    vetor[i][j]=1;
                }
                else vetor[i][j]=vetor[i-1][j]+vetor[i-1][j-1];
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(vetor[i][j]!=0)printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }

    return 0;
}
