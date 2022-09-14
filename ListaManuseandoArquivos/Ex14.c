/*. Dado um arquivo contendo um conjunto de nome e data de
nascimento (DD MM AAAA, isto é,3 inteiros em sequência),
faça um programa que leia o nome do arquivo e
a data de hoje e construa outro arquivo contendo o
nome e a idade de cada pessoa do primeiro arquivo.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void getAno(int *dia, int *mes, int *ano){
    printf("Digite a data de hoje:");
    scanf("%d %d %d", dia,mes,ano);
}
int main()
{
    int cont=0,dia,diah,mes,mesh,ano,anoh, nome[20];
    char nome1[100], nome2[100];
    FILE *arq,*arq2;
    char linha[1000];
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    getAno(&diah,&mesh,&anoh);
    arq = fopen(nome1, "r");
    arq2 = fopen("arq2.txt", "w");

    while(fscanf(arq,"%s %d %d %d",nome, &dia,&mes,&ano)!=EOF){
        if(mes<mesh){
                fprintf(arq2,"%s %d\n",nome,anoh-ano);
        }
        else if(mes>mesh)fprintf(arq2,"%s %d\n",nome,anoh-ano-1);
        else if(mes==mesh){
            if(dia<=diah)fprintf(arq2,"%s %d\n",nome,anoh-ano);
            else fprintf(arq2,"%s %d\n",nome,anoh-ano-1);
        }
    }
    fclose(arq);
    fclose(arq2);
    return 0;
}
