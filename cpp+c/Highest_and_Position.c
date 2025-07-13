#include<stdio.h>
#include<limits.h>

int main()
{
    int x = 0;
    int max = INT_MIN;
    int pos = 0;

    for(int i = 1; i<=100;i++)
    {
        scanf("%d", &x);
        if(x>max)
        {
            max = x;
            pos = i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}