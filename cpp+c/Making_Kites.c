#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d cm2\n",a*b/2);
    }
    
    return 0;
}