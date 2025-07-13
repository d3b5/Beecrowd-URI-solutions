#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    double t;
    if(x == 1)
    {
        t = 4.00*y;
    }
    else if(x == 2)
    {
        t = 4.50*y;
    }
    else if (x == 3)
    {
        t = 5.00*y;
    }
    else if(x == 4)
    {
        t = 2.00*y;
    }
    else
    {
        t = 1.50*y;
    }

    printf("Total: R$ %.2lf\n",t);
    return 0;
}