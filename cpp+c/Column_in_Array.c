#include<stdio.h>
int main()
{
    double a[12][12];
    int col;
    char func;
    scanf("%d %c", &col, &func);
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    float sum,avg;
    sum = 0;

    for(int i=0; i<12; i++)
    {
        sum+=a[i][col];
    }
    if(func == 'S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",(sum/12.0));
    return 0;
}