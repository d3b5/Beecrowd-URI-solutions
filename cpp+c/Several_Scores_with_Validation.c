#include<stdio.h>
int main()
{
    float a,b,op,avg;

    while(1)
    {
        scanf("%f", &a);
        while(a < 0 || a > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &a);
        }

        scanf("%f", &b);
        while(b < 0 || b > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &b);
        }

        avg = (a+b)/2;
        printf("media = %.2f\n",avg);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f", &op);

        while(op != 1 && op != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%f", &op);
        }
        if(op == 1) continue;
        else break;
    }
    return 0;
}