/* Escreva uma função chamada teste que recebe um valor n passado por valor e dois inteiros b e k
passados por “referência". Sua função deve retornar em b e k valores tal que b^k = n e b seja o menor
possível */
#include <stdio.h>
#include <math.h>

void teste(int n, int *b, int *k){
    int i,j;
    for(i=2;i<=n;i++){
        *b = i;
        for(j=1;pow(i,j)<=n;j++){
            *k = j;
            if(pow(i,j)==n){
                return;}
        }
    }
}

int main(){
int n=1,b=0,k=0;
teste(n,&b,&k);
printf("%d ^ %d = %d",b,k,n);
return 0;
}
