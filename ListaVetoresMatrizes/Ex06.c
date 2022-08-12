/*. Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor.*/
#include <stdio.h>

int main()
{
    int vetor[10],menor,maior;
    printf("Digite os 10 numeros do vetor:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
        if(i==0){
            maior=vetor[i];
            menor=vetor[i];
        }
        else if(maior<vetor[i])maior=vetor[i];
        else if(menor>vetor[i])menor=vetor[i];
    }

    printf("Maior numero: %d\nMenor numero: %d", maior,menor);

    return 0;
}


