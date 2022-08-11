/*Fac¸a um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que nao s ˜ ao m ˜ ultiplos de 7 ou que terminam com 7.*/
#include <stdio.h>
int main(){
int vet[100],aux=0;
for(int i=0;i-aux<100;i++){
    if(i%10!=7&&i%7!=0){
    vet[i-aux]=i;}
    else aux++;
}
printf("Vetor inteiro: \n");
for(int i=0;i<100;i++)
printf("%d\n", vet[i]);
return 0;
}
