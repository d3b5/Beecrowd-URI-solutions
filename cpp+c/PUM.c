#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    for( int j=1; j<=n;j++)
    {
        printf("%d %d %d PUM\n",i,i+1,i+2);
        i+=4;
    }
    return 0;
}