/*2º Dados os programas abaixo verifique os erros neles e proponha uma
correção:
c)Este programa converte um número N de base 10 para um número
em base M
 #include <stdio.h>

int main(void){
int N,M,R,pot;
scanf(“%d %d”,&N,&M);
pot = 1;
for(resto = N; resto != 0; resto++){
R = R + ((resto%M)*pot);
pot = pot*10;
resto = resto/M;
}
printf(“%d”,R);
return 0;
}
}

*/
 #include <stdio.h>

int main(void){
int N,M,R=0,pot,resto=0;
scanf("%d %d",&N,&M);
pot = 1;
for(resto = N; resto != 0; ){
R = R + ((resto%M)*pot);
pot = pot*10;
resto = resto/M;
}
printf("%d",R);
return 0;
}

