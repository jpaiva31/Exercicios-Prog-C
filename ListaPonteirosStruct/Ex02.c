/*Suponha que criamos uma estrutura para armazenar Datas:
struct Data{
int dia;
int mes;
int ano;
};
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).
Dica: Ordene o vetor separadamente por cada um dos campos.*/
#include <stdio.h>
#include <stdlib.h>
struct Data
{
    int dia;
    int mes;
    int ano;
};

void ordena(struct Data vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(vet[i].ano>vet[j].ano)
            {
                struct Data aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }

    for(int i=0; i<tam; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            for(int k=j; vet[i].ano==vet[k].ano; k++)
            {
                if(vet[i].mes>vet[k].mes)
                {
                    struct Data aux=vet[i];
                    vet[i]=vet[k];
                    vet[k]=aux;
                }
            }
        }
    }

    for(int i=0; i<tam; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            for(int k=j; vet[i].ano==vet[k].ano && vet[i].mes==vet[k].mes; k++)
            {
                if(vet[i].dia>vet[k].dia)
                {
                    struct Data aux=vet[i];
                    vet[i]=vet[k];
                    vet[k]=aux;
                }
            }
        }
    }





}

void printaVetor(struct Data vetor[],int n){
    for(int i=0;i<n;i++){
    printf("Dia: %d Mes: %d Ano: %d\n", vetor[i].dia,vetor[i].mes,vetor[i].ano);
    }
}

int main()
{
    int n;
    printf("Digite a quantidade de datas que serao cadastrados: \n");
    scanf("%d", &n);
    struct Data* vetor=(struct Data*)malloc(n*sizeof(struct Data));
    for(int i=0; i<n; i++)
    {
        printf("Dia %d: ", i+1);
        scanf("%d", &vetor[i].dia);
        printf("Mes %d: ", i+1);
        scanf("%d", &vetor[i].mes);
        printf("Ano %d: ", i+1);
        scanf("%d", &vetor[i].ano);
    }

    ordena(vetor,n);
    printaVetor(vetor,n);

    return 0;
}
