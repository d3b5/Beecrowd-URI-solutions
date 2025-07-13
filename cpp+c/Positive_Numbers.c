#include<stdio.h>
int main()
{
    int cnt = 0;
    double v;
    for(int i=1; i<=6; i++)
    {
        scanf("%lf", &v);
        if(v>0) cnt++;
    }
    printf("%d valores positivos\n",cnt);
    return 0;
}