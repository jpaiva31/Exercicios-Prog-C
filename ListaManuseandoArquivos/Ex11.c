/*Faça um programa no qual o usuário informa o nome do arquivo e uma palavra, e retorne o
número de vezes que aquela palavra aparece no arquivo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int cont=0,aux=0;
    char nome1[100], nome2[100];
    FILE *arq,*arq2;
    char linha[1000];
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    printf("Digite uma palavra ");
    scanf("%s", nome2);
    arq = fopen(nome1, "r");

    while(fgets(linha,1000,arq)!=0)
    {
        char palavra[100];
        for(int i=0; i<strlen(linha); i++)
        {
            if(i==0 || i!=0 && (linha[i-1]!=' '||linha[i-1]!='\n'))
            {
                int a=0;
                aux=0;
                while(linha[i]!=' ' && linha[i]!='\n' && linha[i]!='\0' )
                {
                    if(linha[i]==nome2[aux])
                    {
                        aux++;
                        i++;
                    }
                    else
                    {
                        a=1;
                        break;
                    }
                }
                if(a==0)
                {
                    cont++;
                }
                else a=0;

            }
        }
    }
    printf("O arquivo tem %d vezes a palavra %s", cont, nome2);
    fclose(arq);
    return 0;
}
