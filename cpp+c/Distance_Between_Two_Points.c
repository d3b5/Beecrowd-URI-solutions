#include<stdio.h>
int main()
{
    double x1,x2,y1,y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double d = sqrt((x1-x2)*(x1-x2) +(y1-y2)*(y1-y2));

    printf("%.4lf\n",d);
    return 0;
}