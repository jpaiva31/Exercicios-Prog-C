/* 1� a) Dados tr�s n�meros inteiros digitados pelo usu�rio diga qual � o maior e o
menor entre eles.
*/

#include <stdio.h>
int main(){
int a,n;
printf("Digite os 3 numeros e te diremos o maior deles: ");
for(int i=0;i<3;i++){
    scanf("%d", &n);
    if(i==0)a=n;
    else if(a<n)a=n;
}
printf("%d", a);
return 0;
}
