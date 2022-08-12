/*Fac¸a um programa para ler 10 numeros DIFERENTES a serem armazenados em um ´
vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos, ˜
sendo que caso o usuario digite um n ´ umero que j ´ a foi digitado anteriormente, o programa ´
devera pedir para ele digitar outro n ´ umero. Note que cada valor digitado pelo usu ´ ario ´
deve ser pesquisado no vetor, verificando se ele existe entre os numeros que j ´ a foram ´
fornecidos. Exibir na tela o vetor final que foi digitado.
*/
#include <stdio.h>
int main(){
int vetor[10];
printf("Digite o vetor de 10 numeros:\n");
for(int i=0;i<10;i++){
    scanf("%d", &vetor[i]);
    for(int j=0;j<i;j++){
        if(vetor[j]==vetor[i]){
            printf("Digite outro numero, esse ja foi digitado!\n");
            i--;
            break;
        }
    }
}

for(int i=0;i<10;i++){
    printf("%d\n", vetor[i]);
}

return 0;
}
