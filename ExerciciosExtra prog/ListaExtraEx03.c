/*. Faça um programa que leia um número real x e calcule o valor de f(x) = √
x+ (x/2) +x
x
*/

#include <stdio.h>
#include <math.h>

int main(){
float a;
scanf("%f", &a);
printf("%f", pow(a,0.5)+a/2+pow(a,a));

return 0;
}
