/*. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores */
#include <stdio.h>

int main()
{
    int vetor[5],menor,maior,cont=0;
    printf("Digite os 5 numeros do vetor:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &vetor[i]);
        if(i==0){
            maior=vetor[i];
            menor=vetor[i];
        }
        else if(maior<vetor[i])maior=vetor[i];
        else if(menor>vetor[i])menor=vetor[i];
        cont+=vetor[i];
    }

    printf("Maior numero: %d\nMenor numero: %d\nMedia dos valores: %.2lf", maior,menor, (double)cont/5);

    return 0;
}


