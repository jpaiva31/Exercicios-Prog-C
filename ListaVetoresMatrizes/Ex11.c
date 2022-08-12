/*. Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos n ´ umeros positivos desse vetor.*/
#include <stdio.h>

int main()
{
    int vetor[10],cont=0,soma=0;
    printf("Digite os 10 numeros do vetor:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<10; i++)
    {
       if(vetor[i]<0)cont++;
       else soma+=vetor[i];
    }

    printf("Quantidade de numeros negativos: %d\nSoma dos numeros positivos: %d", cont, soma);

    return 0;
}


