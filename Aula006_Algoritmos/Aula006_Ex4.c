/*Faça um programa que lˆe dois n´umeros inteiros positivos a e b.
Utilizando la¸cos, o seu programa deve calcular e imprimir o valor a
b*/
#include <stdio.h>

int main(){
int a,b,r;
scanf("%d %d", &a,&b);
r=a;
for(int i=1;i<b;i++)r=a*r;

printf("%d", r);
return 0;
}
