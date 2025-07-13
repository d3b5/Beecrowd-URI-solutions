#include<stdio.h>
int main()
{
    double km,fuel,rate;
    scanf("%lf %lf", &km, &fuel);

    rate = km/fuel;
    printf("%.3lf km/l\n",rate);
    return 0;
}