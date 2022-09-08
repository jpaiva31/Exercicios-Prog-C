/*. Faça um programa que receba o nome de um arquivo de entrada e outro de saída. O arquivo de
entrada contém em cada linha o nome de uma cidade (ocupando 40 caracteres) e o seu número
de habitantes. O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde
aparece o nome da cidade mais populosa seguida pelo seu número de habitantes.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int cont=0,maior,aux,linhas=0;
    char linha[1000],linha2[1000],nome1[100], nome2[100],maiorN[100];
    FILE *arq,*arq2,*arq3;
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome2);
    arq = fopen(nome1, "r");
    arq2 = fopen(nome2, "w");

    while(fgets(linha2,1000,arq)!=0)
    {
        linhas++;
    }
    rewind(arq);
    for(int i=0; i<linhas; i++)
    {
        fscanf(arq,"%s %d",linha,&aux);
        if(i==0)maior=aux;
        if(aux>maior)
        {
            maior=aux;
            strcpy(maiorN,linha);
        }
    }
    fprintf(arq2,"%s %d", maiorN,maior);


    fclose(arq);
    return 0;
}
