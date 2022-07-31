/*Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro
número da série de fibonacci que é maior ou igual a n.*/
#include <stdio.h>

int fibo(int a)
{
    int aux=0,i=1,aux2;
    while(i<a)
    {
        aux2=i;
        i+=aux;
        aux=aux2;
    }
    return i;
}

int main()
{
    int a;
    printf("Digite o inteiro e te direi o primeiro numero da serie de fibonacci maior ou igual a ele: ");
    scanf("%d", &a);
    printf("\n%d", fibo(a));
    return 0;

}
