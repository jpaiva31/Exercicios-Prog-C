/*Faça um programa que receba do usuário um arquivo texto e um caractere. Mostre na tela
quantas vezes aquele caractere ocorre dentro do arquivo.
Nome do arquivo: arq.txt */
#include <stdio.h>
#include <string.h>
int main()
{
    int cont=0;
    FILE *arq;
    char linha[1000],n;
    arq = fopen("arq.txt", "r");
    printf("Digite o caractere que deseja buscar: ");
    scanf("%c", &n);
    while(fgets(linha,1000,arq)!=0){
        for(int i=0;i<strlen(linha);i++){
            if(linha[i]==n) cont++;
        }
    }
    printf("Arquivo tem %d letras '%c'", cont,n);
    fclose(arq);

    return 0;
}
