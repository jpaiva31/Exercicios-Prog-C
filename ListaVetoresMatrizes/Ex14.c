/*. Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ˜
e os escreva na tela.*/
#include <stdio.h>

int main()
{
    int vetor[10],repetidos[10]={0};
    printf("Digite os 10 numeros do vetor:\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Numeros repetidos:\n");
    for(int i=0; i<10; i++)
    {
        for(int j=i+1;j<10;j++){
            if(vetor[i]==vetor[j]){
                repetidos[i]++;
                repetidos[j]++;}
        }
    }

    for(int i=0;i<10;i++){
        if(repetidos[i]!=0)printf("%d", vetor[i]);
    }

    return 0;
}



