/*
Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse
arquivo possui.

Nome do arquivo: arq.txt
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int cont=0;
    FILE *arq;
    char linha[1000];
    arq = fopen("arq.txt", "r");
    while(fgets(linha,1000,arq)!=0)
        cont++;
    printf("O programa tem %d linhas", cont);
    fclose(arq);

    return 0;
}
