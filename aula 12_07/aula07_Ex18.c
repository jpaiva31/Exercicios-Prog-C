/*Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
ou igual a 6
*/
#include <stdio.h>

int main(){
int n;
float a,b,media;
printf("Digite a quantidade de alunos: ");
scanf("%d", &n);
for(int i=0;i<n;i++){
printf("\nDigite as duas notas dos alunos\n");
scanf("%f %f", &a, &b);
media=(a+b)/2;
if(media>=6)
printf("A media do aluno eh %.2f e ele foi aprovado", media);
else printf("A media do aluno eh %.2f e ele foi reprovado", media);
}
return 0;
}
