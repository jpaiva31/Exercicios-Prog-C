/* 1º e) )Dado um dígito, escrever o mesmo em código Morse.
Abaixo a tabela:
1->. _ _ _ _
2-> . . _ _ _
3-> . . . _ _
4-> . . . . _
5-> . . . . .
6-> _ . . . .
7-> _ _ . . .
8-> _ _ _ . .
9-> _ _ _ _ .
0-> _ _ _ _ _
*/
#include <stdio.h>
#include <string.h>
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
            else printf(". ");
        }

    }


}
int main(){
int a;
printf("Digite um numero de um digito:");
scanf("%d", &a);
Morse(a);
return 0;
}

