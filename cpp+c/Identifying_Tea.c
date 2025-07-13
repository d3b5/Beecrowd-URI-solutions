#include<stdio.h>
int main()
{
    int a[5];
    int t;
    int cnt = 0;
    scanf("%d", &t);
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == t) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}