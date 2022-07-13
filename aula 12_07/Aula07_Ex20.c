/*Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
são cachorros existentes na loja*/

#include <stdio.h>

int main(){
int n,gato=0,perro=0;
char a[100];
printf("Informe a quantidade de animais da loja");
scanf("%d", &n);
for(int i=0;i<n;i++){
    scanf("%s", a);
    if(a[0]=='g'&&a[1]=='a'&&a[2]=='t'&&a[3]=='o')gato++;
    if(a[0]=='c'&&a[1]=='a'&&a[2]=='c'&&a[3]=='h'&&a[4]=='o'&&a[5]=='r'&&a[6]=='r'&&a[7]=='o')perro++;
    }
    printf("Cachorros: %d\nGatos: %d\n", perro, gato);

return 0;
}
