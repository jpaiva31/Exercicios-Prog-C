/*Escreva uma fun��o que computa a pot�ncia a
b para valores a (double) e b (int) passados por par�metro (n�o use bibliotecas como math.h). Use a fun��o anterior e crie um programa que imprima todas
as pot�ncias: 2
0
, 2
1
, ..., 2
10
, 3
0
, ..., 3
10
, ..., 1010
*/

#include <stdio.h>

double pot(double a,int b){
double aux=a;
for(int i=0;i<b;i++)a*=aux;
return a;
}

int main(){
for(double i=1;i<11;i++){
        for(int j=1;j<11;j++){
            printf("%2.lf^%d = %2.lf\n",i,j,pot(i,j));
        }


}
return 0;
}
