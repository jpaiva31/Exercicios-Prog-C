/*Fac¸a um programa que leia um vetor de 5 posic¸oes para n ˜ umeros reais e, depois, um ´
codigo inteiro. Se o c ´ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem ´
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ´
escreva uma mensagem informando que o codigo ´ e inv ´ alido.*/
#include <stdio.h>

int main()
{
    int vetor[5],n=1;
    printf("Digite os 5 numeros do vetor:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite:\n0-Encerrar o programa\n1-Mostra o vetor na ordem direta\n2-Mostra o vetor na ordem inversa\n");

    while(n!=0)
    {
        scanf("%d", &n);
        if(n==1)
        {
            for(int i=0; i<5; i++)
            {
                printf("%d\n", vetor[i]);
            }
        }
        else if(n==2)
        {
            for(int i=4; i>=0; i--)
            {
                printf("%d\n", vetor[i]);
            }
        }
        else if(n!=0)
        {
            printf("Comando invalido!");
        }
    }
    return 0;
}



