#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    double a,b,c,d;

    while(n--)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        a*= 2;
        b*=3;
        c*=5;
        d = (a+b+c)/10.0;
        printf("%.1lf\n",d);
    }
    return 0;
}