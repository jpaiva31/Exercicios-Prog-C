/*Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <stdio.h>

void mexe(int vetor[6])
{
    int soma=0;
    for(int i=0; i<6; i++)
    {
        if(i==0||i==5||i==1)
            soma+=vetor[i];
    }
    printf("%d\n", soma);
    vetor[4]=100;
    for(int i=0; i<6; i++)
    {
        printf("%d\n", vetor[i]);
    }
}

int main()
{
    int vetor[6]= {1,0,5,-2,-5,7};
    mexe(vetor);
    return 0;
}
