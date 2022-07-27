
//funcao para escrever, imprimir e zerar
#include <stdio.h>
void ler(int vet[],int n){
    printf("Digite os numeros do vetor: \n");
    for(int i=0;i<n;i++)scanf("%d", &vet[i]);

}

void imprimir(int vet[],int n){
printf("Os numeros inseridos no vetor foram: \n");
for(int i=0;i<n;i++)printf("%d\n", vet[i]);
}

void zerar(int vet[],int n){
    for(int i=0;i<n;i++)vet[i]=0;
printf("Vetor depois de ser zerado: \n");
for(int i=0;i<n;i++)printf("%d\n", vet[i]);
}
int menor(int vet[],int n){
int m;
for(int i=0;i<n;i++){
    if(i==0)m=vet[i];
    else if(vet[i]<m) m=vet[i];
}
return m;
}
int maior(int vet[],int n){
int m;
for(int i=0;i<n;i++){
    if(i==0)m=vet[i];
    else if(vet[i]>m) m=vet[i];
}
return m;
}
int media(int vet[],int n){
float m=0;
for(int i=0;i<n;i++)m+=vet[i];
m=m/n;
return m;
}

int main(){
int n,vet[100];
printf("Digite a quantidade de numeros do vetor: \n");
scanf("%d", &n);
ler(vet,n);
imprimir(vet,n);
printf("O maior numero eh %d\n", maior(vet,n));
printf("O menor numero eh %d\n", menor(vet,n));
printf("A media dos numeros eh %d\n", media(vet,n));
zerar(vet,n);
return 0;
}
