/*Fac¸a um programa que leia dez conjuntos de dois valores, o primeiro representando o
numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno ´
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente ´
com suas alturas.*/
#include <stdio.h>
int main(){
int vetorA[10],maior,menor,cma,cme;
float vetorB[10];
printf("Digite numero e tamanho de 10 alunos:\n");
for(int i=0;i<10;i++){
scanf("%d %f",&vetorA[i],&vetorB[i]);
if(i==0){
    maior=vetorA[i];
    menor=vetorB[i];
    cme=i;
    cma=i;
}
else if(maior<vetorA[i]){
        maior=vetorA[i];
        cma=i;
}
else if(menor>vetorA[i]){
        menor=vetorA[i];
        cme=i;
}
}
printf("O maior eh o aluno de numero %d, sua altura eh %.2f\nO menor  eh o aluno de numero %d, sua altura eh %.2f\n",vetorA[cma], vetorB[cma], vetorA[cme], vetorB[cme]);

return 0;
}


