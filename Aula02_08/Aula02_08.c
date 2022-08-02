#include <stdio.h>
#include <string.h>
int main()
{
    int vogal=0,cons=0;
    char vet[1000];
    printf("Digite a string");
    scanf("%s", vet);
    for(int i=0; i<strlen(vet); i++)
    {
        if(vet[i]=='a'||vet[i]=='e'||vet[i]=='i'||vet[i]=='o'||vet[i]=='u'||vet[i]=='A'||vet[i]=='E'||vet[i]=='I'||vet[i]=='O'||vet[i]=='U') vogal++;
        else cons++;
    }
    printf("Ao todo, tem %d vogais e %d consoantes", vogal, cons);
    return 0;
}
