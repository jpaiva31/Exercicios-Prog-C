/*. Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui. */
#include <stdio.h>

int main()
{
    int vetor[10],cont=0;
    printf("Digite os 10 numeros do vetor:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<10; i++)
    {
       if(vetor[i]%2==0)cont++;
    }

    printf("O vetor tem %d numeros pares\n", cont);

    return 0;
}

