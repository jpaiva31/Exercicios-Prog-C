#include <stdio.h>
#include <string.h>
int checa(char vet[1000],char palavra[1000])
{
    int i,cont=0;
    for(i=0; i<strlen(vet); i++)
    {
        if(vet[i]!=' ')
        {
            if(vet[i]==palavra[cont])
            {
                cont++;
            }
            else cont=0;
            if(cont==strlen(palavra))break;
        }
        else cont=0;
    }

    if(i==strlen(vet))return -1;

    else return i-strlen(palavra)+1;
}

int main()
{
    char vet[1000],palavra[1000];
    gets(vet);
    scanf("%s",palavra);
    printf("%d", checa(vet,palavra));
    return 0;
}
