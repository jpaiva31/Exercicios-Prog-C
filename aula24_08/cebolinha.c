#include <stdio.h>
#include <string.h>

void cebolinha(char vetor[100])
{
    for(int i=0; i<strlen(vetor); i++)
    {
        if(vetor[i]=='r'&&vetor[i+1]!=' '&&vetor[i+1]!='\0'){
            if(vetor[i+1]=='r'){
                for(int j=i+1;j<strlen(vetor);j++){
                    vetor[j]=vetor[j+1];
                }
            }
            vetor[i]='l';
        }
    }
printf("%s", vetor);
}

int main()
{
    char vetor[100]={' '};
    fflush(stdin);
    gets(vetor);
    cebolinha(vetor);
    return 0;
}
