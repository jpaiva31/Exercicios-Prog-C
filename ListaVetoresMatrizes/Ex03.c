/* Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/
#include <stdio.h>

int main()
{
    int conjunto1[10], conjunto2[10];
    printf("Digite os 10 numeros do conjunto:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &conjunto1[i]);
    }

    for(int i=0; i<10; i++)
    {
        conjunto2[i]=conjunto1[i]*conjunto1[i];
    }
    printf("Conjunto 1:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\n", conjunto1[i]);
    }
    printf("Conjunto 2:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\n", conjunto2[i]);
    }
    return 0;
}

