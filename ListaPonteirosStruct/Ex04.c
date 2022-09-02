/*Refaça as funções de busca sequencial e busca binária vistas em aula assumindo que o vetor possui
chaves que podem aparecer repetidas. Neste caso, você deve retornar em um outro vetor todas as
posições onde a chave foi encontrada.
Protótipo da função: void busca(int vet[], int tam, int chave, int posicoes[], int *n)
• Você deve devolver em posicoes[] as posições de vet que possuem a chave, e devolver em *n o
número de ocorrências da chave.
– OBS: Na chamada desta função, o vetor posições deve ter espaço suficiente (por exemplo,
tam) para guardar todas as possíveis ocorrências da chave.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void busca(int vet[],int tam, int chave, int posicoes[], int *n)
{
    int aux = tam/2,min=0,max=tam,cont=0;
    while(min!=max && aux<max)
    {
        if(chave==vet[aux])
        {
            while(chave==vet[aux-1]&&aux>=0)
            {
                aux--;
            }
            while(chave==vet[aux])
            {
                posicoes[cont]=aux;
                cont++;
                aux++;
            }
            *n=cont;
            return;
        }
        else if(chave<vet[aux])
        {
            max=aux;
            aux=(max+min)/2;
        }
        else
        {
            min = aux;
            if(tam%2!=0)
                aux=(max+min)/2;
            else
                aux=(max+1+min)/2;
        }
    }
}

int main()
{
    int vetor[6]= {1,2,3,3,5,5},n=2;
    int posicoes[6];
    busca(vetor,6,5,posicoes,&n);
    for(int i=0; i<n; i++)
    {
        printf("%d ", posicoes[i]);
    }
    return 0;
}
