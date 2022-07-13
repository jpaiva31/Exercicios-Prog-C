/*Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
h. respectiva porcentagem de audiência*/

#include <stdio.h>

int main()
{
    float a,b=0;
    int c1=0,c2=0,c3=0,c4=0,c5=0,n,aux, aux2;

    printf("Digite a quantidade de casas participantes na pesquisa\n");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &aux, &aux2);
        switch(aux){
    case 3:
        c1+=aux2;
        break;
    case 5:
        c2+=aux2;
        break;
    case 8:
        c3+=aux2;
        break;
    case 11:
        c4+=aux2;
        break;
    case 13:
        c5+=aux2;
        break;
        default: printf("Nao tem esse canal");

        }

    }

    printf("Total de pessoas assistindo:\nCanal 3: %d\nCanal 5: %d\nCanal 8: %d\nCanal 11: %d\nCanal 13: %d\n", c1,c2,c3,c4,c5);

    return 0;
}
