/*Fa�a um programa que leia o conte�do de um arquivo e crie um arquivo com o mesmo conte�do,
mas com todas as letras min�sculas convertidas para mai�sculas. Os nomes dos arquivos ser�o
fornecidos, via teclado, pelo usu�rio. A fun��o que converte mai�scula para min�scula � o
toupper(). Ela � aplicada em cada caractere da string*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cont=0;
    char nome1[100], nome2[100];
    FILE *arq,*arq2;
    char linha[1000];
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    printf("Digite o nome do arquivo novo: ");
    scanf("%s", nome2);
    arq = fopen(nome1, "r");
    arq2 = fopen(nome2, "w");

    while(fgets(linha,1000,arq)!=0){
        for(int i=0;i<strlen(linha);i++){
            if(linha[i]>96&&linha[i]<123)fprintf(arq2,"%c", toupper(linha[i]));
            else fprintf(arq2,"%c", linha[i]);
        }
    }
    fclose(arq);
    fclose(arq2);
    return 0;
}

