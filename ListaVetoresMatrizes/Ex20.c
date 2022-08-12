/*. Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um ´
vetor com 10 posic¸oes. Preencha um segundo vetor apenas com os n ˜ umeros ´ ´ımpares
do primeiro vetor.*/
#include <stdio.h>

int main()
{
    int vetor[10],vetor2[10],cont=0;
    printf("Digite os 10 numeros do vetor:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i]>50||vetor[i]<0)i--;
    }
    for(int i=0; i<10; i++)
    {
    if(vetor[i]%2!=0)vetor2[i]=vetor[i];
    else{
        if(i==0){vetor2[0]=1;}
        else{vetor2[i]=vetor2[i-1];

        }
    }
    }
    printf("Os dois vetores:\n");
  for(int i=0; i<10; i++)
    {
        printf("%d %d\n", vetor[i],vetor2[i]);
    }
    return 0;
}


