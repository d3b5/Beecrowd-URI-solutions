#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int k = 1;
    for(int i=1; k<=b; i++)
    {
        printf("%d",k);
        k++;
        for(int j =1; j<a; j++)
        {
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}