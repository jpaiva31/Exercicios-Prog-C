/* 1� b) Dado os numeros n e m (digitados pelo usu�rio) , escreva a tabuada de n de
1 at�  m .
Ex.: n = 2 , m = 20 faz a tabuada de 2 de 1 a 20.
Restrinja a entrada de dados de maneira que caso seja digitado um valor menor
que 2 e maior que 9 seja exibida uma mensagem de aviso e n�o calcule a
tabuada.

*/

#include <stdio.h>
int main(){
int m,n;
scanf("%d %d", &n,&m);
for(int i=1;i<=m;i++)
printf("%d * %d = %d\n", i, n, i*n);
return 0;
}

