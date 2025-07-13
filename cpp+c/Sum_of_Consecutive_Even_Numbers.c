#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d", &x);
        if(x==0) break;
        int cnt = 0;
        int sum = 0;

        for(int i=x; cnt<5;i++)
        {
            if(i%2 == 0)
            {
                sum+=i;
                cnt++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}