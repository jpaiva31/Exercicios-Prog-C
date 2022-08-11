/*Fac¸a um programa que receba 6 numeros inteiros e mostre: ´
• Os numeros pares digitados; ´
• A soma dos numeros pares digitados; ´
• Os numeros ´ ´ımpares digitados;
• A quantidade de numeros ´ ´ımpares digitados;*/
#include <stdio.h>

int main(){
int vet[6], cont1=0,cont2=0;
for(int i=0;i<6;i++){
    scanf("%d", &vet[i]);
}
printf("Numeros pares:\n");
for(int i=0;i<6;i++)
{
    if(vet[i]%2==0){
        printf("%d\n", vet[i]);
        cont1++;}
}
printf("Quantidade de numeros pares: %d\n", cont1);
printf("Numeros impares:\n");

for(int i=0;i<6;i++)
{
    if(vet[i]%2!=0){
        printf("%d\n", vet[i]);
        cont2++;}
}
printf("Quantidade de numeros impares: %d", cont2);

return 0;
}
