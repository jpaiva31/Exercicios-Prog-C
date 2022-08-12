/*Leia um vetor de 10 posic¸oes e atribua valor 0 para todos os elementos que possu ˜ ´ırem
valores negativos.*/
#include <stdio.h>

int main()
{
    int vetor[10];
    printf("Digite os 10 numeros do vetor:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Vetor sem os numeros negativos:\n");

    for(int i=0; i<10; i++)
    {
        if(vetor[i]<0)vetor[i]=0;
        else printf("%d\n", vetor[i]);
    }

    return 0;
}


