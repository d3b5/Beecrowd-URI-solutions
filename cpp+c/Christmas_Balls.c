#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b); 
    if(b%2!=0) b--;
    if(a*2 >= b) printf("Amelia tem todas bolinhas!\n");
    else printf("Faltam %d bolinha(s)\n",b/2-a);
    return 0;
}