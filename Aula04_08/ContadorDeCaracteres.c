#include <stdio.h>
#include <string.h>
void contador(char vet[1000])
{
    int alfa[127]= {0};
    for(int i=0; i<strlen(vet); i++)
    {
            alfa[vet[i]]++;
    }
    for(int i=0; i<127; i++)
    {
        if(alfa[i]!=0)
        {
            printf("%c: %d\n",i, alfa[i]);
        }
    }

}

int main()
{
    char vet[1000];
    gets(vet);
    contador(vet);
    return 0;
}
