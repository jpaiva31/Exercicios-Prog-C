/*. Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral. */
#include <stdio.h>

int main()
{
    int vetor[15],media=0;
    printf("Digite as 15 notas:\n");

    for(int i=0; i<15; i++)
    {
        scanf("%d", &vetor[i]);
        media+=vetor[i];
    }

    printf("Media da turma:%.2lf\n", (double)media/15);

    return 0;
}




