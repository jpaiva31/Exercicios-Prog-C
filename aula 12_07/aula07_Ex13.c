/*Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses
números. Encerre a execução quando um número negativo for digitado
*/
#include <stdio.h>

int main(){
int n,aux=0;
scanf("%d",&n);
aux=n;
while(n>=0){
scanf("%d",&n);
if(n<0)break;
aux+=n;
}
printf("%d", aux);

return 0;
}
