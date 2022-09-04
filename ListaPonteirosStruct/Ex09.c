/*Faça uma função chamada media que recebe um vetor de double, um inteiro n que indica o tamanho
do vetor, e um inteiro i passado por referência. A função deve retornar a média dos n elementos no
vetor e no inteiro i, passado por referência, deve retornar a posição do elemento que tem o valor mais
próximo da média.
Cabeçalho: double media(double vet[],int n, int *i);.*/
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
