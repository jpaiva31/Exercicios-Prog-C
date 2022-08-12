/*Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, esta ordenado em ordem crescente at ´ e o sexto elemento, e a partir ´
desse elemento esta ordenado em ordem decrescente. Dado o vetor da quest ´ ao anterior, ˜
proponha um algoritmo para ordenar os elementos.*/
#include <stdio.h>
int main(){
int vetor[11]={1,5,8,10,14,20,19,18,17,16,15},pos=0,x;

    for(int i=0; i<10; i++)
    {
        int menor=vetor[i];
        x=i;
        for(int j=pos; j<10; j++)
        {
            if(menor>vetor[j])
            {
                menor=vetor[j];
                x=j;
            }
        }
        int aux=vetor[pos];
        vetor[pos]=menor;
        vetor[x]=aux;
        pos++;
    }
    for(int i=0; i<10; i++)printf("%d\n", vetor[i]);
    return 0;
return 0;
}
