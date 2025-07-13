#include<stdio.h>
#include<limits.h>
int main()
{
    int days, cur,tk;
    int min = INT_MAX;
    scanf("%d %d", &days, &cur);

    while(days--)
    {
        scanf("%d", &tk);
        cur += tk;
        if(min > cur) min = cur;
    }
    printf("%d\n", min);
    return 0;
}