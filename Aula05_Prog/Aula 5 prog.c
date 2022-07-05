#include <stdio.h>

int main(){

int a,b,c,d,e,f,g,h,i,j,k;

printf("Digite os 5 dados do primeiro time:\n");
scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
printf("Digite os 5 dados do segundo time:\n");
scanf("%d %d %d %d %d", &f,&g,&h,&i,&j);

if(a>f){
    printf("Primeiro time venceu!\n");
}
else if(a==f){
    if(b>g){
    printf("Primeiro time venceu!\n");
}
else if(b==g){
    if(c>h){
    printf("Primeiro time venceu!\n");
    }
    else if(c==h){
        if(d>i){
    printf("Primeiro time venceu!\n");
    }
    else if(d==i){
        if(e>j){
    printf("Primeiro time venceu!\n");
    }
    else if(e==j){
    printf("EMPATOU!");
    }
    else printf("Segundo time venceu");
}
else printf("Segundo time venceu");
}
else printf("Segundo time venceu");
}
else printf("Segundo time venceu");
}
else printf("Segundo time venceu");

    return 0;
}
