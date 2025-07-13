#include<stdio.h>
int main()
{
    int t,a,b,gcd;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        do
        {
            gcd = b;
            b = a%b;
            a = gcd;
        }while(b!=0);
        printf("%d\n",a);
    }
    return 0;
}