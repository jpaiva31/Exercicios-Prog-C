/*Suponha que criamos uma estrutura para armazenar produtos de um supermercado:
struct Produto{
char nome[80];
double preco;
int quantidade;
};
Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque. Funções void ordenaPreco(struct Produto vet[], int
n) e void ordenaQuant(struct Produto vet[], int n). */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Produto{
char nome[5];
double preco;
int quantidade;
};

void ordenaPreco(struct Produto vet[], int n){
printf("Ordendado por preco: \n");
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (vet[i].preco<vet[j].preco){
            struct Produto aux = vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
        }
    }
}
}

void ordenaQuant(struct Produto vet[], int n){
printf("Ordendado por quantidade: \n");
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (vet[i].quantidade<vet[j].quantidade){
            struct Produto aux = vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
        }
    }
}
}

void printaVetor(struct Produto vetor[],int n){
for(int i=0;i<n;i++){
    printf("Nome: %s Preco: %.2lf Quantidade: %d\n", vetor[i].nome,vetor[i].preco,vetor[i].quantidade);
}
}

int main(){
int n;
printf("Digite a quantidade de produtos que serao cadastrados: \n");
scanf("%d", &n);
struct Produto* vetor=(struct Produto*)malloc(n*sizeof(struct Produto));
for(int i=0;i<n;i++){
    printf("Nome do produto %d: ", i+1);
    scanf("%s", vetor[i].nome);
    printf("Preco do produto %d: ", i+1);
    scanf("%lf", &vetor[i].preco);
    printf("Quantidade do produto %d: ", i+1);
    scanf("%d", &vetor[i].quantidade);
}

ordenaPreco(vetor,n);
printaVetor(vetor,n);
ordenaQuant(vetor,n);
printaVetor(vetor,n);
return 0;
}
