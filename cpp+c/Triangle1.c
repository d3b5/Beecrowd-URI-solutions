#include<stdio.h>
int main()
{
    double a,b,c,area,perim;
    scanf("%lf %lf %lf", &a, &b, &c);

    if((a +b) > c && (b+c) >a && (c+a)>b)
    {
        perim = a + b+ c;
        printf("Perimetro = %.1lf\n",perim);
    }
    else
    {
        area = (a+b)*(c/2);
        printf("Area = %.1f\n",area);
    }

    return 0;
}