#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    while(n--)
    {
        scanf("%d", &x);
        if(x == 0) printf("NULL\n");
        else if(x%2 == 0)
        {
            if(x>0) printf("EVEN POSITIVE\n");
            else printf("EVEN NEGATIVE\n");
        }
        else 
        {
            if(x>0) printf("ODD POSITIVE\n");
            else printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}