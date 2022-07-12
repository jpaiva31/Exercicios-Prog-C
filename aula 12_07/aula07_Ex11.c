/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100.
*/
#include <stdio.h>

int main(){
int n,aux=0;
for(int i=0;i<20;i++){
scanf("%d",&n);
if(n>0&&n<100)aux++;
}
printf("%d", aux);
return 0;
}
