#include<stdio.h>
int main()
{
    int a,b,c,n1,n2,n3;
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        n1 = a;
        if(b >= c) 
        {
            n2 = b;
            n3 = c;
        }
        else
        {
            n2 = c;
            n3 = b;
        }
    }
    else if(b >= a && b >= c)
    {
        n1 = b;
        if(a >= c) 
        {
            n2 = a;
            n3 = c;
        }
        else
        {
            n2 = c;
            n3 = a;
        }
    }
    else
    {
        n1 = c;
        if(a >= b)
        {
            n2 = a;
            n3 = b;
        }
        else
        {
            n2 = b;
            n3 = a;
        }
    }

    printf("%d\n%d\n%d\n",n3,n2,n1);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}