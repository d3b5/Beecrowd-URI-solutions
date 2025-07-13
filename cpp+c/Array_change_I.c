#include<stdio.h>
int main()
{
    int n[20];
    for(int i=0; i<20; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0; 
    int j=19;
    while(i<j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    } 
    for(int k=0; k<20; k++)
    {
        printf("N[%d] = %d\n",k, a[k]);
    }
    return 0;
}