/* 1� h))Escreva um programa que descubra um n�mero imaginado pelo usu�rio entre
0 e n. Para cada valor sugerido pelo programa como sendo o valor imaginado
pelo usu�rio, o usu�rio deve responder (honestamente) se o valor sugerido pelo
programa � igual, menor ou maior do que o valor imaginado. A execu��o do
programa deve terminar assim que o programa "adivinhar" o valor imaginado
pelo usu�rio.

*/
#include <stdio.h>
#include <string.h>

int main(){
int n, minimo=0,maximo;
char resp;
printf("Digite um numero maximo n e pense em um numero entre 0 e n:");
scanf("%d", &n);
maximo=n;
printf("\nCaso acertemos seu numero, digite S, se seu numero for maior, digite + e se seu numero for menor, digite -\n");
while(resp!='s'){
    scanf("%c", &resp);
    printf("Seu numero eh %d?", (minimo+maximo)/2);
    scanf("%c",&resp);
    if(resp=='+')minimo=((minimo+maximo)/2)+1;
    if(resp=='-')maximo=((minimo+maximo)/2)-1;

}

return 0;
}
