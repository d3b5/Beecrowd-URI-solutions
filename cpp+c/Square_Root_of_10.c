#include<stdio.h>
int main()
{
    int n;
    double ans = 0;
    scanf("%d", &n);
    while(n--)
    {
        ans += 6.00;
        ans = 1/ans;
    }
    ans += 3;
    printf("%.10lf\n",ans);
    return 0;
}