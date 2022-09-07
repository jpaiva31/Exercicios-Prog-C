/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas vezes cada
letra do alfabeto aparece dentro do arquivo.*/
#include <stdio.h>
#include <string.h>
int main()
{
    int cont=0,cont2=0,alfa[26]={};
    FILE *arq;
    char linha[1000];
    arq = fopen("arq.txt", "r");
    while(fgets(linha,1000,arq)!=0){
        for(int i=0;i<strlen(linha);i++){
            if(linha[i]>96&&linha[i]<123){
                linha[i]-=32;
                alfa[linha[i]-65]++;
            }
            else if(linha[i]>64&&linha[i]<90)alfa[linha[i]-65]++;
        }
    }
    for(int i=0;i<26;i++){
        printf("%c: %d\n",65+i,alfa[i]);
    }
    fclose(arq);

    return 0;
}

