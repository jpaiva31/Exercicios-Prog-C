#include <stdio.h>

int main(){
int n, aux=2, aux2;

scanf("%d", &n);
for(int i=0;i<n;i++){
    scanf("%d",&aux2);
    aux+=aux2;
}
printf("A media eh %.2f", (float)aux/n);

return 0;

}
