#include<stdio.h>
#include<string.h>

int main()
{
    char a[15];
    scanf("%s", &a);
    int n = strlen(a);

    for(int i=0; i<n; i++)
    {
        if(a[i] != '.' && a[i] != '-') printf("%c",a[i]);
        else printf("\n");
    }
    printf("\n");
    return 0;
}