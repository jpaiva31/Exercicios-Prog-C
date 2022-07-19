#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contadora = 0;
    for (int d1=1; d1<=60 ; d1++)
    {
        if(d1%2==1)continue;
        for (int d2=(d1+1); d2<=60; d2++)
        {
            if(d2%2==0)continue;
            for (int d3=(d2+1); d3<=60; d3++)
            {
                if(d3%2==1)continue;
                for (int d4=(d3+1); d4<=60; d4++)
                {
                    if(d4%2==0)continue;
                    for (int d5=(d4+1); d5<=60; d5++)
                    {
                        if(d5%2==1)continue;
                        for (int d6=(d5+1); d6<=60; d6++)
                        {
                            if(d6%2==0)continue;
                            //   printf("[%d %d %d %d %d %d]\n", d1, d2, d3, d4, d5, d6);
                            contadora++;
                        }
                    }
                }
            }
        }
    }

    printf("\nReposta: %d\n", contadora);


    return 0;
}
