#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int a,b,max,min;
        scanf("%d %d", &a, &b);

        if(a>=b) 
        {
            max = a;
            min = b;
        }
        else
        {
            min = a;
            max = b;
        }
        int sum = 0;
        for(int i=min+1; i<max; i++)
        {
            if(i%2 !=0) sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}