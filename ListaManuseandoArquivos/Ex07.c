/*Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto contendo
o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int cont=0;
    FILE *arq,*arq2;
    char linha[1000];
    arq = fopen("arq.txt", "r");
    arq2 = fopen("arq2.txt", "w");

    while(fgets(linha,1000,arq)!=0){
        for(int i=0;i<strlen(linha);i++){
            if(linha[i]=='a'||linha[i]=='e'||linha[i]=='i'||linha[i]=='o'||linha[i]=='u'||linha[i]=='A'||linha[i]=='E'||linha[i]=='I'||linha[i]=='O'||linha[i]=='U')fprintf(arq2,"*");
            else fprintf(arq2,"%c", linha[i]);
        }
    }
    fclose(arq);
    fclose(arq2);
    return 0;
}
