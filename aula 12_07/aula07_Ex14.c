/*Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
a. resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
for igual a “Sim”.
*/
#include <stdio.h>

int main(){
char n[100];

while(n[0]!='s'&&n[1]!='i'&&n[2]!='m'){
printf("Tudo bem?\n");
scanf("%s",n);
}

return 0;
}
