/*. Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
a. seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
pelas compras
*/
#include <stdio.h>

int main(){
int a;
float b,total;
printf("Quando quiser acabar a consulta, digite -1\n");
while(a!=-1){
printf("Digite a quantidade de produtos:");
scanf("%d", &a);
if(a==-1)break;
printf("Digite o preco do produto:");
scanf("%f", &b);
total+=a*b;
}
printf("%f", total);
return 0;
}
