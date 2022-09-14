/*Faça um programa que permita que o usuário entre com diversos nomes e telefone para
cadastro, e crie um arquivo com essas informações, uma por linha. O usuário finaliza a entrada
com ‘0’ para o telefone*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cont=0;
    char nome1[100], nome2[100];
    FILE *arq,*arq2;
    char linha[1000];
    printf("Digite o nome do arquivo novo: ");
    scanf("%s", nome1);
    arq = fopen(nome1, "w");
    for(int i=0;nome2!="0";i++){
        printf("Digite o nome do usuario %d :",i);
        scanf("%s", nome1);
        printf("Digite o telefone do usuario %d :",i);
        scanf("%s", nome2);
        if(strcmp(nome2,"0") == 0)break;
        else{
            fprintf(arq,"%s %s\n", nome1,nome2);
        }
    }



    fclose(arq);
    return 0;
}
