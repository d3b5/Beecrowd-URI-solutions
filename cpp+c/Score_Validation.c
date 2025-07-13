#include<stdio.h>
int main()
{
    double a,b,avg;
    while(1)
    {
        scanf("%lf", &a);
        if(a < 0 || a>10) 
        {
            printf("nota invalida\n");
            continue;
        }
        else break;
    }
    while(1)
    {
        scanf("%lf", &b);
        if(b < 0 || b>10) 
        {
            printf("nota invalida\n");
            continue;
        }
        else break;            
    }
    avg = (a+b)/2.0;
    printf("media = %.2lf\n",avg);

    
    return 0;
}