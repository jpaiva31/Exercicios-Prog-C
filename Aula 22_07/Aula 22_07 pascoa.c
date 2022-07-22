#include <stdio.h>

int main(){
int Y,G,C,X,Z,E,N,D;

scanf("%d", &Y);
G=Y%19+1;
C=Y/100+1;
X=3*C/4-12;
Z=(8*C+5)/25-5;
E=(11*G+20+Z-X)%30;
if(E==25&&G>11||G==24)E++;
N=44-E;
if(N<21)N+=30;
D=(5*Y)/4-(X+10);
N+=7-((D+N)%7);
if(N>31)printf("Pascoa: %d de Abril de %d", N-31,Y);
else printf("Pascoa: %d de Marco de %d", N,Y);
return 0;
}
