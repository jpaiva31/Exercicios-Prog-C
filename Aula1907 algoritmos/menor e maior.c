#include <stdio.h>


int main()
{
    int a[10],maior,menor;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(i==0)
        {
            maior=a[i];
            menor=a[i];
        }
        if(a[i]>maior)maior=a[i];
        if(a[i]<menor)menor=a[i];
    }

    printf("Maior: %d\nMenor: %d", maior, menor);
    return 0;
}
