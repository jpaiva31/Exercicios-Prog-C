/*.Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
a. que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0.
*/
#include <stdio.h>

int main(){
float a=-1,b=-1;

while(a!=0&&b!=0){
printf("Digite o peso do prato e o valor das bebidas\n");
scanf("%f", &a);
scanf("%f", &b);
if(a==0&&b==0)break;
printf("O preco total eh: %.2f\n", 23.59*a+b);
}
return 0;
}
