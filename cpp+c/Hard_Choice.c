#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum = 0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a-d <0) sum += d-a;
    if(b-e <0) sum += e-b;
    if(c-f <0) sum += f-c;
    printf("%d\n",sum);
    return 0;
}