/*. Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor.*/
#include <stdio.h>

int main()
{
    int vetor[10],menor,maior;
    printf("Digite os 10 numeros do vetor:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
        if(i==0){
            maior=i;
            menor=i;
        }
        else if(maior<vetor[i])maior=i;
        else if(menor>vetor[i])menor=i;
    }

    printf("Posicao do maior numero: %d\nPosicao do menor numero: %d", maior,menor);

    return 0;
}



