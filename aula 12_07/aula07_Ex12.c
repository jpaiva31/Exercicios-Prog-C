/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e
a. 100, quantos estão entre 101 e 200 e quantos são maiores de 200.
*/
#include <stdio.h>

int main(){
int n,aux=0,aux2=0,aux3=0;
for(int i=0;i<20;i++){
scanf("%d",&n);
if(n>0&&n<100)aux++;
if(n>100&&n<200)aux2++;
if(n>200)aux3++;
}
printf("entre 0 e 100: %d", aux);
printf("entre 100 e 200: %d", aux2);
printf("maiores que 300: %d", aux3);

return 0;
}
