/*Fac¸a um programa que calcule o desvio padrao de um vetor ˜ v contendo n = 10 numeros, ´
onde m e a media do vetor.*/
#include <stdio.h>
#include <math.h>
void printaDesvio(int vet[10],double media){
double desvio=0;
for(int i=0;i<10;i++){
    desvio+=pow(vet[i]-media,2);
}
printf("O desvio padrao eh %.2lf", pow(desvio/9,0.5));
}

int main(){
int vet[10],cont=0;
for(int i=0;i<10;i++){
    scanf("%d", &vet[i]);
    cont+=vet[i];
}
double m=cont/10;
printaDesvio(vet, m);
return 0;
}
