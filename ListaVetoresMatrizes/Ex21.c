/*Fac¸a um programa que receba do usuario dois vetores, ´ A e B, com 10 numeros inteiros ´
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/
#include <stdio.h>
int main(){
int vetorA[10],vetorB[10],vetorC[10];
printf("Digite os 10 numeros do vetor A:\n");
for(int i=0;i<10;i++){
scanf("%d",&vetorA[i]);
}
printf("Digite os 10 numeros do vetor B:\n");
for(int i=0;i<10;i++){
scanf("%d",&vetorB[i]);
}
for(int i=0;i<10;i++){
vetorC[i]=vetorA[i]-vetorB[i];
}
printf("Vetor C:\n");
for(int i=0;i<10;i++){
printf("%d\n",vetorC[i]);
}
return 0;
}
