#include<stdio.h>
#include<math.h>

int main()
{
    int points;
    scanf("%d", &points);

    if(points == 3) printf("1\n");
    else printf("%d\n",points-2);
    return 0;
}