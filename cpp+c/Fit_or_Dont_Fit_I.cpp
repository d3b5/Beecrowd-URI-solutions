#include<stdio.h>
int main()
{
    long long int t,a,b;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &a, &b);
        if(a>0 && b >0 && (a%10==b%10)) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}