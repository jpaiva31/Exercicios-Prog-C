#include <stdio.h>

int main(){
float menor,maior,n;
scanf("%f", &menor);
maior=menor;
for(int i=0;i<14;i++){
    scanf("%f", &n);
    if(n<menor)menor=n;
    if(n>maior)maior=n;
    }
    printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);

return 0;
}
