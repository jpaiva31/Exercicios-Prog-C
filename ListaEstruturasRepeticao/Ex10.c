/*2º Dados os programas abaixo verifique os erros neles e proponha uma
correção:
b)Este programa lê uma sequência de tamanho indefinido de
números do teclado e calcula a média aritmética dos mesmos. A
leitura é interrompida quando se digita um número negativo. O
numero negativo não deve entrar no cálculo
 #include <stdio.h>

int main(void){
double acumulado,media,lido;
int contador;
acumulado = 0;
contador = 0;
do{
scanf(“%lf”,&lido);
contador++;
total = (total + lido)/contador;
}while (lido >= 0);
media = total;
printf(“%f”,media);
return 0;
}

*/
 #include <stdio.h>

int main(void){
double acumulado,media,lido;
int contador,total=0;
acumulado = 0;
contador = 0;
do{
scanf("%lf",&lido);
acumulado+=lido;
if(lido<0)break;
contador++;
total = acumulado/contador;
}while (lido >= 0);
media = total;
printf("%f",media);
return 0;
}
