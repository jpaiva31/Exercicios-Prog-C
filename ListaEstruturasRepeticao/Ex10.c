/*2� Dados os programas abaixo verifique os erros neles e proponha uma
corre��o:
b)Este programa l� uma sequ�ncia de tamanho indefinido de
n�meros do teclado e calcula a m�dia aritm�tica dos mesmos. A
leitura � interrompida quando se digita um n�mero negativo. O
numero negativo n�o deve entrar no c�lculo
 #include <stdio.h>

int main(void){
double acumulado,media,lido;
int contador;
acumulado = 0;
contador = 0;
do{
scanf(�%lf�,&lido);
contador++;
total = (total + lido)/contador;
}while (lido >= 0);
media = total;
printf(�%f�,media);
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
