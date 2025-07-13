#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int a,b,sum = 0;
    while(t--)
    {
        scanf("%d %d", &a, &b);
        sum += (a*b);
    }
    printf("%d\n", sum);
    return 0;
}