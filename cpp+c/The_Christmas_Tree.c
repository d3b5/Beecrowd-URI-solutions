#include<stdio.h>
int main()
{
    int t,h,w,b;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &h, &w, &b);
        if((h >= 200 && h <= 300) && w >= 50 && b >= 150) printf("Sim\n");
        else printf("Nao\n");
    }
    return 0;
}