#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    double a,b;
    a = n/log(n);
    b = a*1.25506;
    printf("%.1lf %.1lf\n",a,b);
    return 0;
}