/*Faça um programa que leia o conteúdo de um arquivo e crie um arquivo com o mesmo conteúdo,
mas com todas as letras minúsculas convertidas para maiúsculas. Os nomes dos arquivos serão
fornecidos, via teclado, pelo usuário. A função que converte maiúscula para minúscula é o
toupper(). Ela é aplicada em cada caractere da string*/

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

