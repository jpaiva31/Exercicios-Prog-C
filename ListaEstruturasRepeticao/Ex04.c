/* 1� d) Calcule o logaritmo de 10 mais pr�ximo de um dado n�mero n. Para calcular
este valor conte quantas vezes pode�se dividir o n�mero por 10 at� que o
resultado da divis�o inteira seja menor igual  a 1.
Ex: 9/10 = 0 �> o logaritmo mais pr�ximo � 1 pois foi feita uma divis�o por 10 at�
atingir zero.
Note que este valor tamb�m indica o n�mero de d�gitos de um valor inteiro
*/
#include <stdio.h>
int main(){
int n,cont=0;
printf("Digite o valor de n :");
scanf("%d", &n);
while(n>=1){
    n=n/10;
    cont++;
}
printf("O logaritmo mais proximo eh %d", cont);
return 0;
}

