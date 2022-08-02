#include <stdio.h>
#include <string.h>

int vog(char vet[1000]){
int num=0;
for(int i=0; i<strlen(vet); i++)
    {
        if(vet[i]=='a'||vet[i]=='e'||vet[i]=='i'||vet[i]=='o'||vet[i]=='u'||vet[i]=='A'||vet[i]=='E'||vet[i]=='I'||vet[i]=='O'||vet[i]=='U') num++;
    }
return num;
}

int cons(char vet[1000]){
int num=0;
for(int i=0; i<strlen(vet); i++)
    {
        if(vet[i]=='a'||vet[i]=='e'||vet[i]=='i'||vet[i]=='o'||vet[i]=='u'||vet[i]=='A'||vet[i]=='E'||vet[i]=='I'||vet[i]=='O'||vet[i]=='U'){}
        else num++;
    }
return num;

}

int main()
{
    char vet[1000];
    printf("Digite a string: ");
    scanf("%s", vet);
    printf("Ao todo, tem %d vogais e %d consoantes", vog(vet), cons(vet));
    return 0;
}
