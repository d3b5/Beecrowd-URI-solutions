#include<stdio.h>
int main()
{
    int l;
    char op;
    double sum = 0;
    double a[12][12];
    scanf("%d %c", &l, &op);

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for(int i=0; i<12; i++)
    {
        sum += a[l][i];
    }

    if(op == 'S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/12);
    return 0;
}