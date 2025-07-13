#include<stdio.h>
int main()
{
    int a;
    double vol;
    scanf("%d", &a);
    vol = (4.0/3)*3.14159*a*a*a;
    printf("VOLUME = %.3lf\n",vol);
    return 0;
}