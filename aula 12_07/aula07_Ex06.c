/*Leia a idade de 20 pessoas e exiba a média das idades.
*/
#include <stdio.h>

int main(){
int n,aux=1;
scanf("%d",&n);
for(int i=0;i<19;i++){
scanf("%d",&n);
aux+=n;
}
printf("%d", aux/20);
return 0;
}
