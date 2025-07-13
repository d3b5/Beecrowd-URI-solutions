#include<stdio.h>
int main()
{
    int n,min,sec,hr; // in seconds
    scanf("%d", &n);

    if (n<60)
    {
        printf("0:0:%d\n",n);
    }
    else if(n<3600 )
    {
        min = n/60;
        sec = n - (min*60);
        printf("0:%d:%d\n",min,sec);
    }
    else
    {
        hr = n/3600;
        min = (n - (hr*3600))/60;
        sec = (n-(hr*3600)-(min*60));
        printf("%d:%d:%d\n",hr,min,sec);
    }
    return 0;
}