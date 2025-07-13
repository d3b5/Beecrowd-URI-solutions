#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s", &a);

    int cnt = 0;
    int n = strlen(a);

    for(int i=0; i<n; i++)
    {
        if(a[i] == '1') cnt++;        
    }
    if (cnt % 2 == 0) strcat(a, "0");
    else strcat(a, "1");
    printf("%s\n",a);
    return 0;
}