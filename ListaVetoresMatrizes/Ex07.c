/*. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra. */
#include <stdio.h>

int main()
{
    int vetor[10],maior,pos;
    printf("Digite os 10 numeros do vetor:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
        if(i==0){
            maior=vetor[i];
            pos=i;
        }
        else if(maior<vetor[i]){
            maior=vetor[i];
            pos=i;
        }
    }
    printf("Vetor:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("Maior numero: %d\nPosicao: %d", maior,pos);

    return 0;
}
