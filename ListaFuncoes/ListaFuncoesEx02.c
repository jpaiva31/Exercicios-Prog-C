/*Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. OBS:
Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os
valores de n! para n = 1, . . . , 20.*/
#include <stdio.h>
double fat(double n){
if(n<0)return 1;
for(double i=n-1;i>1;i--){
    n*=i;
}
return n;
}

int main(){
for(double i=1;i<21;i++)printf("fatorial de %2.lf: %2.lf\n",i,fat(i));
return 0;
}
