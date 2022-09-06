/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são
vogais*/
#include <stdio.h>
#include <string.h>
int main()
{
    int cont=0;
    FILE *arq;
    char linha[1000];
    arq = fopen("arq.txt", "r");
    while(fgets(linha,1000,arq)!=0){
        for(int i=0;i<strlen(linha);i++){
            if(linha[i]=='a'||linha[i]=='e'||linha[i]=='i'||linha[i]=='o'||linha[i]=='u'||linha[i]=='A'||linha[i]=='E'||linha[i]=='I'||linha[i]=='O'||linha[i]=='U') cont++;
        }
    }
    printf("O programa tem %d vogais", cont);
    fclose(arq);

    return 0;
}
