/*Fa�a um programa que receba dois arquivos do usu�rio, e crie um terceiro arquivo com o
conte�do dos dois primeiros juntos (o conte�do do primeiro seguido do conte�do do segundo).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cont=0;
    char linha[1000],nome1[100], nome2[100];;
    FILE *arq,*arq2,*arq3;
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome2);
    arq = fopen(nome1, "r");
    arq2 = fopen(nome2, "r");
    arq3 = fopen("arq3.txt", "w");

    while(fgets(linha,1000,arq)!=0){
        for(int i=0;i<strlen(linha);i++){
            fprintf(arq3,"%c", linha[i]);
        }
    }
    fprintf(arq3,"\n");
    while(fgets(linha,1000,arq2)!=0){
        for(int i=0;i<strlen(linha);i++){
            fprintf(arq3,"%c", linha[i]);
        }
    }
    fclose(arq);
    fclose(arq2);
    fclose(arq3);
    return 0;
}

