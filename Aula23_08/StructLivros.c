#include <stdio.h>

struct livro
{
    char nome[20],autor[20];
    int paginas,data_Lancamento;
};
int main()
{
    struct livro l[5];
    for(int i=0; i<5; i++)
    {
        printf("Digite o nome do %d livro:", i+1);
        fflush(stdin);
        gets(l[i].nome);
        printf("Digite o numero de paginas do %d livro:", i+1);
        scanf("%d", &l[i].paginas);
        printf("Digite o nome do autor do %d livro:", i+1);
        fflush(stdin);
        gets(l[i].autor);
        printf("Digite o ano de lancamento do %d livro:", i+1);
        scanf("%d", &l[i].data_Lancamento);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d livro:\nNome: %s\nAutor: %s\nNumero de paginas: %d\nAno de lancamento: %d", i+1,l[i].nome,l[i].autor,l[i].paginas,l[i].data_Lancamento);
    }
    return 0;
}
