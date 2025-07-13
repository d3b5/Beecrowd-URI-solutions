#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b || b == c || c == a) printf("S\n");
    else if(abs(a-b) == c || abs(b-c) == a || abs(c-a) == b) printf("S\n");
    else printf("N\n");
    return 0;
}