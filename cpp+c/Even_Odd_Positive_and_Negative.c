#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    int even,odd,pos,neg;
    even = 0;
    odd = 0;
    pos = 0;
    neg = 0;
    for(int i=0; i<5; i++)
    {
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;

        if(a[i] %2 == 0) even++;
        else odd++;
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)",neg);
    return 0;
}