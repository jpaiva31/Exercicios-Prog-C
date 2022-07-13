/*Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.
*/
#include <stdio.h>

int main()
{
    int n,aux=0;
    char a[100], menor[100];
    printf("Digite, respectivamente, a idade e o nome");
    scanf("%d",&n);
    aux=n;
    scanf("%s", menor);
    for(int i=0; i<9; i++) //adaptando uma gambiarra por o prof ainda nao ter explicado vetores
    {
        scanf("%d",&n);
        if(n<aux)
        {
            aux=n;
            scanf("%s", menor);
        }
        else scanf("%s", a);

    }
    printf("%s %d", menor, aux);
    return 0;
}
