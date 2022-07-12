/*Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes.
*/

#include <stdio.h>

int main(){
int n;
char nome[100];
scanf("%s %d", nome, &n);
for(int i=0;i<n;i++)printf("%s\n", nome);
return 0;
}
