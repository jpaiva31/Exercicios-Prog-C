/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos.*/
#include <stdio.h>

int main()
{
    int vetor[20],repetidos[20]={0};
    printf("Digite os 20 numeros do vetor:\n");

    for(int i=0; i<20; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Retirando os repetidos:\n");
    for(int i=0; i<20; i++)
    {
        for(int j=i+1;j<20;j++){
            if(vetor[i]==vetor[j]){
                repetidos[i]++;
                repetidos[j]++;}
        }
    }

    for(int i=0;i<20;i++){
        if(repetidos[i]==0)printf("%d", vetor[i]);
    }

    return 0;
}



