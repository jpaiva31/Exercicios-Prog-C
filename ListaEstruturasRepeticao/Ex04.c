/* 1º d) Calcule o logaritmo de 10 mais próximo de um dado número n. Para calcular
este valor conte quantas vezes pode­se dividir o número por 10 até que o
resultado da divisão inteira seja menor igual  a 1.
Ex: 9/10 = 0 ­> o logaritmo mais próximo é 1 pois foi feita uma divisão por 10 até
atingir zero.
Note que este valor também indica o número de dígitos de um valor inteiro
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

