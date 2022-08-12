/*Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .*/
#include <stdio.h>

int main()
{
    int vetor[8],x,y;
    printf("Digite os 8 numeros\n");
    for(int i=0; i<8; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Digite as 2 posicoes que serao somadas:\n");
    scanf("%d %d", &x,&y);

    printf("A soma de %d e %d eh %d", vetor[x],vetor[y], vetor[x]+vetor[y]);

    return 0;
}


