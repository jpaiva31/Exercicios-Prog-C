/*Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo
das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.*/

#include <stdio.h>

int main(){
int x,y;

scanf("%d %d", &x,&y);

x= x + y;
y= x - y;
x= x - y;

printf("%d %d", x,y);
return 0;
}
