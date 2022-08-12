/*Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuario n ´ ao˜
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo:
• Soma entre x e y: soma de cada elemento de x com o elemento da mesma posic¸ao˜
em y.
• Produto entre x e y: multiplicac¸ao de cada elemento de ˜ x com o elemento da mesma
posic¸ao em ˜ y.
• Diferenc¸a entre x e y: todos os elementos de x que nao existam em ˜ y.
• Intersec¸ao entre ˜ x e y: apenas os elementos que aparecem nos dois vetores.
• Uniao entre ˜ x e y: todos os elementos de x, e todos os elementos de y que nao˜
estao em ˜ x.*/
#include <stdio.h>
int checa(int vetor[10],int n)
{
    for(int i=0; i<10; i++)
    {
        if(n==vetor[i])return 1;
    }
    return 0;
}
int main()
{
    int vetor1[10],vetor2[10],vetor3[10],vetor4[20],cont=0;
    printf("Digite o primeiro vetor:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite o segundo vetor:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vetor2[i]);
    }
    printf("Soma dos elementos dos vetores: \n");
    for(int i=0; i<10; i++)
    {
        printf("%d + %d = %d\n", vetor1[i], vetor2[i], vetor1[i]+vetor2[i]);
    }
    printf("Produto dos elementos dos vetores: \n");
    for(int i=0; i<10; i++)
    {
        printf("%d * %d = %d\n", vetor1[i], vetor2[i], vetor1[i]*vetor2[i]);
    }
    printf("Diferenca dos elementos dos vetores: \n");
    for(int i=0; i<10; i++)
    {
        printf("%d - %d = %d\n", vetor1[i], vetor2[i], vetor1[i]-vetor2[i]);
    }
    printf("Intersecao dos elementos dos vetores: \n");
    for(int i=0; i<10; i++)
    {
        if(checa(vetor2,vetor1[i])==0){
        vetor3[cont]=vetor1[i];
        cont++;
        }
    }

    for(int i=0; i<cont; i++)
    {
        printf("%d\n", vetor3[i]);
    }
cont=0;
     printf("Uniao entre os dois vetores: \n");
    for(int i=0; i<10; i++)
    {
        if(checa(vetor4,vetor1[i])==0){
        vetor4[cont]=vetor1[i];
        cont++;
        }
    }
    for(int i=0; i<10; i++)
    {
        if(checa(vetor4,vetor2[i])==0){
        vetor4[cont]=vetor2[i];
        cont++;
        }
    }

    for(int i=0; i<cont; i++)
    {
        printf("%d\n", vetor4[i]);
    }
    return 0;
}
