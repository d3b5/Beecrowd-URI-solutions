#include<stdio.h>
#include<string.h>
int main()
{
    int ini,actions;
    scanf("%d %d", &ini, &actions);

    char a[7];
    char b[7] = "fechou";
    while(actions--)
    {
        scanf("%s", &a);
        if(strcmp(a,b) == 0)
        {
            ini++;
        }
        else
        {
            ini--;
        }
    }
    printf("%d\n", ini);
    return 0;
}