#include<stdio.h>
int main()
{
    //S = 1 + 1/2 + 1/3 + … + 1/100

    double sum = 0;
    for(double i=1.00; i<=100.00; i++)
    {
        sum+= (1/i);
    }
    printf("%.2lf\n",sum);
    return 0;
}