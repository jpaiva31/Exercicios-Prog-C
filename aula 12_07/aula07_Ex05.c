/*Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses
números
*/
#include <stdio.h>

int main(){
int n,aux=1;
scanf("%d",&n);
for(int i=0;i<9;i++){
scanf("%d",&n);
aux+=n;
}
printf("%d", aux);
return 0;
}
