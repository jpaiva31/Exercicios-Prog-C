/*Escreva uma fun��o que recebe um n�mero ponto flutuante n passado por par�metro e devolve a raiz
quadrada de n.*/
#include <stdio.h>
#include <math.h>
float raiz(float n){
return pow(n,0.5);
}
int main(){
float n;
scanf("%f", &n);
printf("\n%.2f",raiz(n));
return 0;
}
