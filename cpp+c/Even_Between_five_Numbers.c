#include<stdio.h>
int main()
{
    int cnt = 0;
    int v[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d", &v[i]);        
    }
    for(int i=0; i<5; i++)
    {
        if(v[i] % 2 == 0) cnt++;
    }
    printf("%d valores pares\n",cnt);
    return 0;
}