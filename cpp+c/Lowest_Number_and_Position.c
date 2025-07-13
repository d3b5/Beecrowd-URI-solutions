#include<stdio.h>
#include<limits.h>

int main()
{
    int x;
    scanf("%d", &x);
    int a[x];
    int pos;
    int min = INT_MAX;
    for(int i=0; i<x;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<x;i++)
    {
        if(a[i]<min)
        {
            pos = i;
            min = a[i];
        }
    }
    printf("Menor valor: %d\n",a[pos]);
    printf("Posicao: %d\n",pos);
    
    return 0;
}