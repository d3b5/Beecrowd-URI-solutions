#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d", &a);
    while(1)
    {
        scanf("%d", &b);
        if(b>a) break;
    }
    int sum = 0;
    int cnt = 0; 
    for(int i=a; i<b;i++)
    {
        sum+=i;
        cnt++;
        if(sum > b) break;        
    }
    printf("%d\n",cnt);
    return 0;
}