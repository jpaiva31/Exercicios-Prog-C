/*Fac¸a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecc¸ao entre os 2 vetores anteriores, ou seja, que cont ˜ em apenas os n ´ umeros que ´
estao em ambos os vetores. N ˜ ao deve conter n ˜ umeros repetidos*/
#include <stdio.h>
int checa(int vetor[10],int n){
for(int i=0;i<10;i++){
    if(n==vetor[i])return 1;
}
return 0;
}
int main(){
int vetor1[10],vetor2[10],vetor3[10],cont=0;
printf("Digite o primeiro vetor:\n");
for(int i=0;i<10;i++){
    scanf("%d", &vetor1[i]);
}
for(int i=0;i<10;i++){
    scanf("%d", &vetor2[i]);
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(vetor1[i]==vetor2[j]&&checa(vetor3,vetor1[i])==0){
                vetor3[cont]=vetor1[i];
                cont++;

        }
    }
}
for(int i=0;vetor3[i]!=NULL;i++){
    printf("%d\n", vetor3[i]);
}
return 0;
}
