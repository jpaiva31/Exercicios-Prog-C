/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar : 
a. A menor altura do grupo; 
b. A maior altura do grupo; 
*/

#include <stdio.h>

int main(){
float menor,maior,n;
scanf("%f", &menor);
maior=menor;
for(int i=0;i<14;i++){
    scanf("%f", &n);
    if(n<menor)menor=n;
    if(n>maior)maior=n;
    }
    printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);

return 0;
}
