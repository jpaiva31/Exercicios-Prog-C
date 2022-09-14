/*Faça um programa que receba como entrada o ano corrente e o nome de dois arquivos: um de
entrada e outro de saída. Cada linha do arquivo de entrada contém o nome de uma pessoa
(ocupando 40 caracteres) e o seu ano de nascimento. O programa devera ler o arquivo de
entrada e gerar um arquivo de saída onde aparece o nome da pessoa seguida por uma string
que representa a sua idade.
• Se a idade for menor do que 18 anos, escreva “menor de idade”
• Se a idade for maior do que 18 anos, escreva “maior de idade”
• Se a idade for igual a 18 anos, escreva “entrando na maior idade”
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
        fprintf(arq2,"%s ",nome,anoh-ano);
        if(mes<mesh){
                if(anoh-ano>18) fprintf(arq2,"maior de idade\n",nome,anoh-ano);
                else if(anoh-ano==18)fprintf(arq2,"entrando na maior de idade\n",nome,anoh-ano);
                else if(anoh-ano<18)fprintf(arq2,"menor de idade\n",nome,anoh-ano);
        }
        else if(mes>mesh){
            if(anoh-ano-1>18) fprintf(arq2,"maior de idade\n",nome,anoh-ano);
                else if(anoh-ano-1==18)fprintf(arq2,"entrando na maior de idade\n",nome,anoh-ano);
                else if(anoh-ano-1<18)fprintf(arq2,"menor de idade\n",nome,anoh-ano);
        }
        else if(mes==mesh){
            if(dia<=diah){
                if(anoh-ano>18) fprintf(arq2,"maior de idade\n",nome,anoh-ano);
                else if(anoh-ano==18)fprintf(arq2,"entrando na maior de idade\n",nome,anoh-ano);
                else if(anoh-ano<18)fprintf(arq2,"menor de idade\n",nome,anoh-ano);
            }
            else{
                if(anoh-ano-1>18) fprintf(arq2,"maior de idade\n",nome,anoh-ano);
                else if(anoh-ano-1==18)fprintf(arq2,"entrando na maior de idade\n",nome,anoh-ano);
                else if(anoh-ano-1<18)fprintf(arq2,"menor de idade\n",nome,anoh-ano);
            }
        }
    }
    fclose(arq);
    fclose(arq2);
    return 0;
}
