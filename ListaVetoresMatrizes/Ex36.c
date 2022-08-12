/*Leia um vetor com 10 numeros reais, ordene os elementos deste vetor, e no final escreva ´
os elementos do vetor ordenado*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[10],pos=0,x;
    printf("Digite o vetor de 10 elementos para que seja ordenado:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<10; i++)
    {
        int menor=vetor[i];
        x=i;
        for(int j=pos; j<10; j++)
        {
            if(menor>vetor[j])
            {
                menor=vetor[j];
                x=j;
            }
        }
        int aux=vetor[pos];
        vetor[pos]=menor;
        vetor[x]=aux;
        pos++;
    }
    for(int i=0; i<10; i++)printf("%d\n", vetor[i]);
    return 0;
}


/*
2
9
8
10
1
5
3
7
6
4
*/
