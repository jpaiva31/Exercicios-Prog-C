/* 1� g)Dado um n�mero n, escreva na tela um �X� formado por asteriscos (ou
qualquer caracter de sua prefer�ncia !). Permita que apenas n�meros �mpares
sejam utilizados como entrada.
*/
#include <stdio.h>
#include <string.h>
void xis(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j||i+j==n-1){
            printf("*");
        }
        else{printf(" ");}

    }
    printf("\n");
}

}
int main(){
int a;
printf("Digite um numero impar:");
scanf("%d", &a);
xis(a);
return 0;
}
