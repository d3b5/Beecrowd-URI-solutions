#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min = INT_MAX;
    int mini;
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    for(int i=0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            mini = i;
        }
    }
    printf("%d\n",mini+1);
    return 0;
}