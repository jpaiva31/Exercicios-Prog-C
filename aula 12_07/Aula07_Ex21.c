/*O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
fumantes).*/

#include <stdio.h>

int main()
{
    int fum=0,nfum=0;
    char a;
    printf("Caso seja na area de fumantes, digite S, caso nao, digite N\n");
    for(int i=0; i<50; i++)
    {
        scanf("%s", &a);
        if(a=='S')
        {
            if(fum==25)
            {
                printf("So tem mesa na area de nao fumantes\n");
                nfum++;
                continue;
            }
            fum++;
        }


        else if(a=='N')
        {
            if(nfum==25)
            {
                printf("So tem mesa na area de fumantes\n");
                fum++;
                continue;
            }
            nfum++;
        }
    }
    printf("Area de fumante: %d\nArea de nao fumantes: %d\n", fum, nfum);

    return 0;
}
