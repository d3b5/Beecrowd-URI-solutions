#include<stdio.h>
int main()
{
    int t,a,b,max, min;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        int cnt = 0;
        int sum = 0;
        for(int i=a; cnt<b;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
                cnt++;                
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}