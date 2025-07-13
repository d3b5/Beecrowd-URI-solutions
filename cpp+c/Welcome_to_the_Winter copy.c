#include<stdio.h>
int main()
{
    int a,b,c;
    int flag;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b<=c) flag = 1;
    else if((a<b && b<c) && ((b-a) <= (c-b))) flag = 1;
    else if((a>b && b>c) && ((a-b) > (b-c))) flag = 1;
    else if (a==b && b<c) flag = 1;
    else flag = 0;

    if(flag) printf(":)\n");
    else printf(":(\n");
    return 0;
}