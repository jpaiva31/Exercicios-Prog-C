/*Pec¸a ao usuario para digitar dez valores num ´ ericos e ordene por ordem crescente esses ´
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[10],pos=0,x;
    printf("Digite o vetor de 10 elementos para que seja ordenado:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
        for(int j=0; j<i; j++)
        {
            if(vetor[i]<=vetor[j])
            {
                for(int k=j; k<i; k++)
                {
                    int aux=vetor[i];
                    vetor[i]=vetor[k];
                    vetor[k]=aux;
                }
            }
        }
    }

    for(int i=0; i<10; i++)printf("%d\n", vetor[i]);
    return 0;
}
