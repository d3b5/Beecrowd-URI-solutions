// [10,20]
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int in = 0;
    int out = 0;
    int x;
    while(n--)
    {
        scanf("%d", &x);
        if(x >= 10 && x<= 20) in++;
        else out++;
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}