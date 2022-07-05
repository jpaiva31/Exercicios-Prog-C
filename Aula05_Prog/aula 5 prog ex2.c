#include <stdio.h>

int main()
{
    float valor, comissao;
    printf("Digite o valor:\n");
    scanf("%f", &valor);

    if(valor<=2500)
    {
        comissao=valor*0.017+30;
    }
    else if(valor>2500&&valor<=6250)
    {
        comissao= valor*0.0066+56;
    }
    else if(valor>6250&&valor<=20000)
    {
        comissao= valor*0.0034+76;
    }
    else if(valor>20000&&valor<=50000)
    {
        comissao=valor*0.0022+100;
    }
    else if(valor>50000&&valor<=500000)
    {
        comissao=valor*0.0011+155;
    }
    else if(valor>500000)
    {
        comissao=valor*0.0009+255;
    }

    if(valor-comissao<39) comissao=valor+39;

    printf("A comissao eh %.2f", comissao);
}
