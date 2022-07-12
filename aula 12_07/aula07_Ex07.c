/*Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.
*/
#include <stdio.h>

int main(){
int n,aux=0;
scanf("%d",&n);
for(int i=0;i<19;i++){
scanf("%d",&n);
if(n>=18)aux++;
}
printf("%d", aux);
return 0;
}
