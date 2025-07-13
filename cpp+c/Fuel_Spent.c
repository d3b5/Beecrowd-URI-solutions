#include<stdio.h>
int main()
{
    int v,t;
    scanf("%d %d", &t, &v);
    double fuel = (v*t)/12.0;
    printf("%.3lf\n",fuel);
    return 0;
}