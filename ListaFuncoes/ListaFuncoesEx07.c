/*Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro. Sua
função deve retornar um valor inteiro b tal que b
k = n para algum inteiro k, e b seja o menor possível.*/
#include <stdio.h>
#include <math.h>
int teste(int n)
{
    for(int b=2; b<n; b++)
    {
        for(int k=1; pow(b,k)<=n; k++)
        {
            printf("b: %d k: %d n: %d \n", b,k,n);
            if(pow(b,k)==n) return b;
        }
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", teste(n));
    return 0;
}
