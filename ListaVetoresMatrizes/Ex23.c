/*Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto ´
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o ˆ
produto escalar, sendo que o produto escalar e dado por: ´ x1 * y1 + x2 * y2 + ... + xn * yn.*/
#include <stdio.h>
int main(){
int vetorA[5],vetorB[5],vetorC[5];
printf("Digite os 5 numeros do vetor A:\n");
for(int i=0;i<5;i++){
scanf("%d",&vetorA[i]);
}
printf("Digite os 5 numeros do vetor B:\n");
for(int i=0;i<5;i++){
scanf("%d",&vetorB[i]);
}
for(int i=0;i<5;i++){
vetorC[i]=vetorA[i]*vetorB[i];
}
printf("Vetor escalar:\n");
for(int i=0;i<5;i++){
printf("%d\n",vetorC[i]);
}
return 0;
}
