// 1001 | R$ 1.50
// 1002 | R$ 2.50
// 1003 | R$ 3.50
// 1004 | R$ 4.50
// 1005 | R$ 5.50
#include<stdio.h>
int main()
{
    int n,code,q;
    double sum = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d", &code , &q);

        if(code == 1001) sum+=(1.5*q);
        else if(code == 1002) sum+=(2.5*q);
        else if(code == 1003) sum+=(3.5*q);
        else if(code == 1004) sum+=(4.5*q);
        else if(code == 1005) sum+=(5.5*q);
    }
    printf("%.2lf\n",sum);

    return 0;
}