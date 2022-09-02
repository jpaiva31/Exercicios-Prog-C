/*Refa�a as fun��es de busca sequencial e busca bin�ria vistas em aula assumindo que o vetor possui
chaves que podem aparecer repetidas. Neste caso, voc� deve retornar em um outro vetor todas as
posi��es onde a chave foi encontrada.
Prot�tipo da fun��o: void busca(int vet[], int tam, int chave, int posicoes[], int *n)
� Voc� deve devolver em posicoes[] as posi��es de vet que possuem a chave, e devolver em *n o
n�mero de ocorr�ncias da chave.
� OBS: Na chamada desta fun��o, o vetor posi��es deve ter espa�o suficiente (por exemplo,
tam) para guardar todas as poss�veis ocorr�ncias da chave.*/
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
