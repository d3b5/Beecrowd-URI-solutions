#include<stdio.h>
int main()
{
    double a,b,c,avg;
    scanf("%lf %lf %lf", &a, &b, &c);
    a = 2*a;
    b = 3*b;
    c = c*5;
    avg = (a+b+c)/10.0;
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}