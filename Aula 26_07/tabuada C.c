#include <stdio.h>

void tabuada(int n){
for(int i=1;i<10;i++)printf("%d * %d = %d\n", n,i,i*n);
}

int main(){
    int n;
    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d", &n);
    tabuada(n);
return 0;
}
