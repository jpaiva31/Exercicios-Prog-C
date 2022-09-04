/* 8. Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois outros inteiros p1
e p2 passados por referência. A função deve retornar em p1 o maior número primo que é menor do
que m e deve retornar em p2 o menor número primo que é maior do que m */
#include <stdio.h>
void primo(int m, int *p1, int *p2)
{
    int p=1;
    if(m==1)
    {
        *p1 = -1;
        *p2 = 2;
    }
    else if(m==0)
    {
        *p1 = -1;
        *p2 = 2;
    }
    else if(m==2)
    {
        *p1 = -1;
        *p2 = 3;
    }
    else
    {
        for(int i=2; i<m*2; i++)
        {
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    p=0;
                    break;
                }
            }
            if(p==1 && i<m)
            {
                *p1=i;
            }
            else if(p==1 && i>m)
            {
                *p2=i;
                break;
            }
            if(p==0)p=1;
        }
    }
}


int main()
{
    int p1,p2;
    primo(3,&p1,&p2);
    printf("%d %d", p1,p2);

    return 0;
}
