#include<stdio.h>
int main()
{
    int cnt = 0;
    double v;
    double sum;
    for(int i=1; i<=6; i++)
    {
        scanf("%lf", &v);
        if(v>0)
        {
            cnt++;
            sum += v;
        }
    }
    printf("%d valores positivos\n",cnt);
    printf("%.1lf\n",(sum/cnt));
    return 0;
}