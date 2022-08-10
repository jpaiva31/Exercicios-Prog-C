/* 1º c) Dados números n e m,  escreva a todos os números entre 1 a 200 que sejam
divisíveis por n mas não por m.
*/

#include <stdio.h>
int main(){
int m,n;
printf("Digite o valor de n e m: ");
scanf("%d %d", &n,&m);
for(int i=0;i<200;i++)
if(i%n==0&&i%m!=0){
    printf("%d\n", i);
}
return 0;
}
