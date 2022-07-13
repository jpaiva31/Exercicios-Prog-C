/*Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
ultrapassar o quilômetro 4000, parando em várias cidades durante o
a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
b. informação da quilometragem percorrida e adicione ao valor da quilometragem total.
c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
d. ultrapassar os 4000 km.*/

#include <stdio.h>

int main()
{
    float a,b=0;
    int c=0;

    printf("Digite a quantidade de km percorridos a cada cidade que voce parar\n");
    while(a<4000){
        scanf("%f", &b);
        a+=b;
        c++;
    }
    printf("Ja foram percorridos os 4000km, passou por %d cidades", c);
    return 0;
}
