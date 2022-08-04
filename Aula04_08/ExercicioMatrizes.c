#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 3

void zeraMatriz(double mat[LIN][COL]);
void imprimeMatriz(double mat[LIN][COL]);
void lerMatriz(double mat[LIN][COL]);
double mediaMatriz(double mat[LIN][COL]);
void somaMatriz(double mat[LIN][COL]);
int main()
{

    double mat[LIN][COL];

    zeraMatriz(mat);
    lerMatriz(mat);
    imprimeMatriz(mat);
    printf("A media eh %lf\n",mediaMatriz(mat));
    somaMatriz(mat);
    return 0;
}

void zeraMatriz(double mat[LIN][COL])
{

    for(int lin=0; lin<LIN; lin++)
    {
        // zera um conjunto de colunas
        for(int col=0; col<COL; col++)
        {
            mat[lin][col] = 0;
        }
    }
}
void imprimeMatriz(double mat[LIN][COL])
{

    for(int lin=0; lin<LIN ; lin++)
    {
        for(int col=0; col<COL; col++)
        {
            printf("%.1lf ", mat[lin][col]);
        }
        printf("\n");
    }
}

void lerMatriz(double mat[LIN][COL])
{

    for(int lin=0; lin<LIN ; lin++)
    {
        for(int col=0; col<COL; col++)
        {
            printf("MAT[%d][%d]: ",lin, col);
            scanf("%lf", &mat[lin][col]);
        }
    }
}

double mediaMatriz(double mat[LIN][COL])
{
    int a=1;
    double b=0;
    for(int lin=0; lin<LIN; lin++)
    {
        for(int col=0; col<COL; col++)
        {
            a++;
            b+=mat[lin][col];
        }
    }
    return b/a;
}

void somaMatriz(double mat[LIN][COL])
{
    double soma[LIN][COL];
    printf("Digite a Matriz que sera somada: \n");

    lerMatriz(soma);
    for(int lin=0; lin<LIN; lin++)
    {
        for(int col=0; col<COL; col++)
        {
            soma[lin][col]+=mat[lin][col];
        }
    }
    printf("A matriz somada: \n");
    imprimeMatriz(soma);


}


