#include<stdio.h>
int main()
{
    int c1,c2,n1,n2;
    double p1,p2,total;
    scanf("%d %d %lf", &c1, &n1, &p1);
    scanf("%d %d %lf", &c2, &n2, &p2);
    total = (n1*p1) + (n2*p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}