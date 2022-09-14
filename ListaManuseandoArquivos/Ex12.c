/*Abra um arquivo texto, calcule e escreva o n�mero de caracteres, o n�mero de linhas � o n�mero
de palavras neste arquivo. Escreva tamb�m quantas vezes cada letra ocorre no arquivo
(ignorando letras com acento). Obs.: palavras s�o separadas por um ou mais caracteres espa�o,
tabula��o (\t) ou nova linha (\n).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int caractere=0,palavra=0,aux=0,linhas=0;
    char nome1[100];
    FILE *arq;
    char linha[1000];
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    arq = fopen(nome1, "r");

    while(fgets(linha,1000,arq)!=0)
    {
        for(int i=0; i<strlen(linha); i++)
        {
            if(linha[i]!=' '&& linha[i]!='\n' && linha[i]!='/t'){
                caractere++;
            }
            if(aux==0&&linha[i]!=' '&& linha[i]!='\n' && linha[i]!='/t'){
                aux=1;
                palavra++;
            }
            if(aux==1&& linha[i]==' '|| linha[i]=='\n' || linha[i]=='/t'){
                aux=0;
            }
        }
        linhas++;
    }
    printf("O arquivo tem %d caracteres, %d palavras e %d linhas", caractere, palavra,linhas);
    fclose(arq);
    return 0;
}
