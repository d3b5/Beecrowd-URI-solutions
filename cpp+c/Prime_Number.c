#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if(n==1) printf("1 nao eh primo\n");
        int flag = 1;//asumming its prime
        for(int i=2; i<=(n-1); i++)
        {
            if(n % i == 0)
            {
                flag = 0; //not prime
                break;
            }
        }
        if(flag == 1) printf("%d eh primo\n",n);
        else printf("%d nao eh primo\n",n);
    
    }
    return 0;
}