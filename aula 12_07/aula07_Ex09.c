/*Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
maiores do que 8
*/
#include <stdio.h>

int main(){
int n,aux=0;
for(int i=0;i<20;i++){
scanf("%d",&n);
if(n>8)aux++;
}
printf("%d", aux);
return 0;
}
