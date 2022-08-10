/* 1º f)Dado um número inteiro, escrever o mesmo em código Morse. O código
Morse deve ser fornecido na mesma ordem dos caracteres digitados. Utilize o
programa que calcula o logaritmo de 10 para auxiliá­lo nesta tarefa !
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int logaritmo(int a){
int cont=0;
while(a>=1){
    a=a/10;
    cont++;
}
return cont;
}
void Morse(int a){
    for(int i=0;i<5;i++){
        if(a<6){
        if(i<a){
            printf(". ");
        }
        else printf("_ ");
        }
        else{
            if(i<a-5){
            printf("_ ");
            }
            else printf(".");
        }

    }
}
int main(){
int a;
printf("Digite um numero:");
scanf("%d", &a);
for(int i=0;a>=1;i++){
    Morse((a)/(int)pow(10,(logaritmo(a)-1)));
    a=a%(int)pow(10,(logaritmo(a)-1));
}

return 0;
}

