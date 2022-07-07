/*Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário. */
#include <stdio.h>

int main(){
    int a, b;
    printf("Digite o numero que quer ver a tabuada\n");
    scanf("%d", &a);//sei que ainda nao ensinou for, mas pra agilizar kkkkk
    for(b=0;b<10;b++){
        printf("%d * %d = %d\n",a,b,a*b );
    }


return 0;
}
