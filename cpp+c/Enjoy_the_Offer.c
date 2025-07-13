#include<stdio.h>
int main()
{
    int t,a,b,cnt;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(b > a) 
        {
            printf("%d\n",a);
            continue;
        }
        else
        {
            cnt = (a/b) + (a%b);
            printf("%d\n",cnt);
        }
    }
    return 0;
}