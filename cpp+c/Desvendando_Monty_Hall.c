#include<stdio.h>
int main()
{
    int t,a,cnt = 0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &a);
        if(a!=1) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}