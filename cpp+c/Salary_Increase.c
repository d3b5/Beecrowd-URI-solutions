#include<stdio.h>
int main()
{
    float n,sal,d,r;
    scanf("%f", &n);

    if(n >= 0 && n<=400)
    {
        r=15;
        sal = n+(n*0.15);
    }
    else if(n >=400.01 && n<=800)
    {
        r=12;
        sal = n+(n*0.12);
    }
    else if(n >= 800.01 && n<= 1200)
    {
        r=10;
        sal = n+(n*0.1);
    }
    else if(n>= 1200.01 && n<= 2000)
    {
        r=7;
        sal = n + (n*0.07);
    }
    else 
    {
        r=4;
        sal = n + (n*0.04);
    }

    printf("Novo salario: %.2f\n",sal);
    printf("Reajuste ganho: %.2f\n",sal-n);
    printf("Em percentual: %.0f %%\n",r);
    return 0;
}