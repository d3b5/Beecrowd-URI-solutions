#include<stdio.h>
int main()
{
    int t,id,a,b,cnt=0;
    scanf("%d %d", &t, &id);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a == id && b == 0) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}