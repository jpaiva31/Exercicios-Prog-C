/*Fa�a uma fun��o chamada media que recebe um vetor de double, um inteiro n que indica o tamanho
do vetor, e um inteiro i passado por refer�ncia. A fun��o deve retornar a m�dia dos n elementos no
vetor e no inteiro i, passado por refer�ncia, deve retornar a posi��o do elemento que tem o valor mais
pr�ximo da m�dia.
Cabe�alho: double media(double vet[],int n, int *i);.*/
#include <stdio.h>


double media(double vet[],int n, int *i){
    double tot=0,dif=10000;
    for(int j=0;j<n;j++){
        tot+=vet[j];
    }
    tot/=n;
    for(int j=0;j<n;j++){
        double aux = vet[j]-tot;
        if(aux<0)aux*=-1;
        if(aux<dif){
            *i=j;
            dif=aux;
        }
    }
    return tot;
}

int main(){
double vetor[5]={1,2,3,4,5};
int i;
double a=media(vetor,5,&i);
printf("%lf %d", a,i);
return 0;
}
