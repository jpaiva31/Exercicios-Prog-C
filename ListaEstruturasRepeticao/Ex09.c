/*2� Dados os programas abaixo verifique os erros neles e proponha uma
corre��o:
a)Este programa prop�e-se a calcular o fatorial de um
 n�mero n
 #include <stdio.h>

int main(void){
int n,r;
r = 1;
scanf(�%d�,&n);
for(i = 1; i != n; i++){
r = r *i;
}
printf(�%d�,r);
return 0;
}
*/
 #include <stdio.h>

int main(void){
int n,r;
r = 1;
scanf("%d",&n);
for(int i = 1; i <=n; i++){
r = r *i;
}
printf("%d",r);
return 0;
}
