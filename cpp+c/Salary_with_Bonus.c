#include<stdio.h>
int main()
{
    char name[100];
    double sal,sold,tot;
    scanf("%s %lf %lf", &name, &sal, &sold);
    tot = sal + (sold * 0.15);
    printf("TOTAL = R$ %.2lf\n",tot);
    return 0;
}