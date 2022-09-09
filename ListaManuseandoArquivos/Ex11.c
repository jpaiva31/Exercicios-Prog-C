/*Faça um programa no qual o usuário informa o nome do arquivo e uma palavra, e retorne o
número de vezes que aquela palavra aparece no arquivo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int cont=0,aux=0;
    char nome1[100], nome2[100];
    FILE *arq,*arq2;
    char linha[1000];
    printf("Digite o nome do arquivo que sera lido: ");
    scanf("%s", nome1);
    printf("Digite uma palavra ");
    scanf("%s", nome2);
    arq = fopen(nome1, "r");

    while(fgets(linha,1000,arq)!=0){
        char palavra[100];
        for(int i=0;i<strlen(linha);i++){
            if(i==0 || i!=0 && linha[i-1]!=' '){
                int a=0;
                while(linha[i]!=' '){
                    printf("%c %c\n", linha[i],palavra[aux]);
                    if(linha[i]==nome2[aux]){
                        printf("a\n");
                        aux++;
                    }
                    else{
                        a=1;
                        break;
                    }
                    if(a==0){
                            cont++;
                            printf(" aqui\n", linha[i],palavra[aux]);

                    }
                    else a=0;
                }
            }
        }
    }
    printf("%d", cont);
    fclose(arq);
    return 0;
}
