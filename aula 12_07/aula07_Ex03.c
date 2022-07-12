/*Leia o nome do usuário e escreva o nome dele na tela 10 vezes*/

#include <stdio.h>

int main(){
char nome[100];
scanf("%s", nome);
for(int i=0;i<9;i++)printf("%s\n", nome);
return 0;
}
