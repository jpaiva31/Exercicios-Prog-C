/*Escreva uma fun��o que recebe um n�mero inteiro n passado por par�metro e devolve o maior n�mero
primo que � menor ou igual a n.*/
#include <stdio.h>

int primo(int n)
{
    int pri=0,aux,e=1;

    for(int i=1; pri<n; i++)
    {
        for(int j=1; j<(i+2)/2; j++)
        {
            if(j!=1){
            if(i%j==0){e=0;
            break;}
            }
        }
        if(e==1){
        if(pri<n){
        aux=pri;
        pri=i;
        if(pri>n)return aux;
        }
        else return aux;
        }

        else
        {
            e=1;
        }
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", primo(n));
    return 0;
}
