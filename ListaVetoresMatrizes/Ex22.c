/*Fac¸a um programa que leia dois vetores de 10 posic¸oes e calcule outro vetor contendo, ˜
nas posic¸oes pares os valores do primeiro e nas posic¸ ˜ oes impares os valores do se- ˜
gundo.*/
#include <stdio.h>
int main(){
int vetorA[10],vetorB[10],vetorC[20];
printf("Digite os 10 numeros do vetor A:\n");
for(int i=0;i<10;i++){
scanf("%d",&vetorA[i]);
}
printf("Digite os 10 numeros do vetor B:\n");
for(int i=0;i<10;i++){
scanf("%d",&vetorB[i]);
}
for(int i=0;i<20;i++){
if(i%2==0)
vetorC[i]=vetorA[i/2];
if(i%2!=0)
vetorC[i]=vetorB[i/2];
}
printf("Vetor C:\n");
for(int i=0;i<20;i++){
printf("%d\n",vetorC[i]);
}
return 0;
}
