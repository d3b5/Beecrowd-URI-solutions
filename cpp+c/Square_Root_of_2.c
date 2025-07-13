#include<stdio.h>
int main()
{
    int n;
    double ans = 0;
    scanf("%d", &n);
    if(n!=0)
    {
        while(n--)
        {
            ans += 2.00;
            ans = 1/ans;
        }
    }
    ans += 1;
    printf("%.10lf\n",ans);
    return 0;
}