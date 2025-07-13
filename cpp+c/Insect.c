#include<stdio.h>
int main()
{
    int t,a;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &a);
        if(a>8000) printf("Mais de 8000!\n");
        else printf("Inseto!\n");
    }
    return 0;
}