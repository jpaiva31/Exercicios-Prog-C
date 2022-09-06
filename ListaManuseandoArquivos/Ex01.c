/*
Escreva um programa que:
(a) Crie/abra um arquivo texto de nome �arq.txt�
(b) Permita que o usu�rio grave diversos caracteres nesse arquivo, at� que o usu�rio entre
com o caractere �0�
(c) Feche o arquivo
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres
armazenados
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *arq;
    arq = fopen("arq.txt", "w");
    char linha[1000];
    while(strcmp(linha,"0")!=0)
    {
        gets(linha);
        if(strcmp(linha,"0")==0)
            break;
        fprintf(arq,"%s\n", linha);
    }
    fclose(arq);

    arq = fopen("arq.txt", "r");
    while(fgets(linha,1000,arq)!=0)
        printf("%s", linha);

    fclose(arq);

    return 0;
}
