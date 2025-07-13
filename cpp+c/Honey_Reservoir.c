#include<stdio.h>
#define PI 3.14
int main()
{
    double v,d,r,h,a;
    
    while(scanf("%lf %lf", &v, &d) != EOF)
    {
        r = d/2;
        h = v/(PI*r*r);
        a = PI*r*r;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }
    return 0;
}