#include<stdio.h>
int main()
{
    int a,b,c,t;
    a = 0;
    b = 1;
    scanf("%d", &t);

    for(int i =1; i<=t; i++)
    {
        printf("%d",a);
        if(i !=t) printf(" ");
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    
    return 0;
}