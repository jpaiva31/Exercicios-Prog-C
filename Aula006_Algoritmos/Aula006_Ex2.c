#include <stdio.h>

int main()
{
    int n;

    while(n!=5)
    {    
        printf("Escolha seu prato\n1-Tacos\n2-Enchiladas Suizas\n3-Enchiladas verdes\n4-Tostadas\n5-Sair\n");
        scanf("%d",&n);
        if(n==5)
        {
            printf("Volte sempre");
            break;
        }
        printf("O prato pedido foi ");
        if(n==1)printf("Tacos\n");
        if(n==2)printf("Enchiladas Suizas\n");
        if(n==3)printf("Enchiladas verdes\n");
        if(n==4)printf("Tostadas\n");
    }
    return 0;

}
