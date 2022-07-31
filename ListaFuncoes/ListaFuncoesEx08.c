/*Escreva uma função chamada teste que recebe um valor inteiro n (positivo ou negativo) como parâmetro.
 Sua função deve imprimir todos os valores a e b (inclusive negativos) tais que a ∗ b = n*/
#include <stdio.h>

void teste(int n)
{
    if(n<0)
    {
        for(int i=n; i<n*(-1); i++)
        {
            for(int j=n; j<n*(-1); j++)
            {
                if(i*j==n)printf("%d * %d\n", i,j);
            }
        }
    }
    else
    {
        for(int i=n; i>n*(-1); i--)
        {
            for(int j=n; j>n*(-1); j--)
            {
                if(i*j==n)printf("%d * %d\n", i,j);
            }
        }
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    teste(n);

    return 0;
}
