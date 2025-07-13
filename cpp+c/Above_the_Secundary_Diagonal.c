#include<stdio.h>
int main()
{
    double m[12][12];
    char op;
    scanf("%c", &op);
    for(int i=0;i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    double sum = 0;
    double cnt = 0;
    for(int i=0;i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            if(i+j<=10) 
            {
                sum += m[i][j];
                cnt++;
            }
        }
    }
    if(op == 'S') printf("%.1lf\n",sum);
    else printf("%.1lf\n", (sum/cnt));
    
    return 0;
}