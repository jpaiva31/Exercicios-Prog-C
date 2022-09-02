/* 3. Suponha que criamos uma estrutura para armazenar dados de pessoas e um vetor para armazenar
dados de várias pessoas:
struct Pessoa{
int rg;
int cpf;
char nome[80];
};
struct Pessoa cadastro[100];

Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente uma função
de busca por RG, que opera como a busca binária, e que caso exista uma pessoa no cadastro com o
RG a ser buscado, devolve o índice deste cadastro e caso não exista o RG a ser buscado, devolve -1
*/
#include <stdio.h>
#include <string.h>
struct Pessoa{
int rg;
int cpf;
char nome[80];
};

int busca(struct Pessoa vetor[],int num, int tam){
    int n = tam/2,min=0,max=tam;
    while(min!=max && n<max){
        if(num==vetor[n].rg) return n;
        else if(num<vetor[n].rg){
            max=n;
            n=(max+min)/2;
            printf("else1: \n");
        }
        else{
                printf("else2: \n");
            min = n;
            if(tam%2!=0)
                n=(max+min)/2;
            else
                n=(max+1+min)/2;
        }
        printf("min: %d  max: %d  n: %d\n", min,max,n);
    }
    return -1;
}

int main(){
struct Pessoa cadastro[100];
strcpy(cadastro[0].nome,"Abner");
cadastro[0].rg = 0;
strcpy(cadastro[1].nome,"Samuka");
cadastro[1].rg = 2;
strcpy(cadastro[2].nome,"Vitao");
cadastro[2].rg = 4;
strcpy(cadastro[3].nome,"ZNTT");
cadastro[3].rg = 7;
printf("%d ", busca(cadastro,8,4));
return 0;
}
