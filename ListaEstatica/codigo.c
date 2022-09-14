#include <stdio.h>
#include <stdio.h>

typedef struct
{
    int chave;
// outros campos...
} Elemento;
typedef struct
{
    Elemento Arranjo[100];
    int qtdElem;
} Lista;

void iniciar_lista(Lista *p_l)
{
    p_l->qtdElem=0;
}
void reiniciar_lista(Lista *p_l)
{

}
int consultar_tamanho(Lista *p_l)
{
    return p_l->qtdElem;
}
void imprimir_lista(Lista *p_l)
{
    for (int pos=0; pos<p_l->qtdElem; pos++)
    {
        printf("%d ", p_l->Arranjo[pos].chave);
    }

}
int inserirElemLista(Lista *p_l, Elemento ele, int pos_usu)
{
    if ((p_l->qtdElem == 100) || (pos_usu < 0) || (pos_usu > p_l->qtdElem))
        return 0;
    for (int j = p_l->qtdElem; j > pos_usu; j--){ //encontra posição
        p_l->Arranjo[j] = p_l->Arranjo[j-1]; //desloca elementos
        p_l->Arranjo[j] = ele;
        p_l->qtdElem++;
    }
    return 1;
}

int removerElemLista(Lista *p_l, int pos_usu)
{
    if ((pos_usu < 0) || (pos_usu > p_l->qtdElem))
        return 0;
    p_l->Arranjo[pos_usu] = p_l->Arranjo[p_l->qtdElem - 1];
    p_l->qtdElem--;
    return 1;
}
int buscaSequencial(Lista *p_l, int chave_busca){
    int i;
    for (i=0; i<p_l->qtdElem; i++){
    if (p_l->Arranjo[i].chave==chave_busca)
    return i;
    }
return -1;
}
int removerElemListaPelaChave(Lista *p_l, int chave)
{
    int pos = buscaSequencial(p_l, chave);
    if(pos == -1)
        return 0;
    p_l->Arranjo[pos] = p_l->Arranjo[p_l->qtdElem - 1];
    p_l->qtdElem--;
    return 1;
}
void menu()
{
    printf("Digite uma opcao:\n1-Inserir elemento na lista\n2-Remover elemento da lista por posicao\n3-Remover elemento da lista por chave\n4-Mostrar lista\n5-Sair\n");
}

int main()
{
    int n,aux,pos;
    Lista l;
    iniciar_lista(&l);

    while(n!=5){
    menu();
    scanf("%d", &n);
    if(n==1)
    {
        printf("Qual numero voce deseja inserir? ");
        scanf("%d",&aux);
        Elemento ele;
        ele.chave=n;
        printf("Em qual posicao voce deseja inserir o numero? ");
        scanf("%d",&pos);
        inserirElemLista(&l,ele,pos);
    }
    else if(n==2){
        printf("Qual a posicao do numero voce deseja remover? ");
        scanf("%d",&aux);
        removerElemLista(&l,aux);
    }
    else if(n==3){
        printf("Qual o numero que voce deseja remover? ");
        scanf("%d",&aux);
        removerElemLista(&l,aux);
    }
    else if(n==4){
        imprimir_lista(&l);
        }
    }
    return 0;
}
