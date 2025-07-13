#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        printf("Ho");
        if(n > 0) printf(" ");
    }
    printf("!\n");
    return 0;
}