#include<stdio.h>
int main()
{
    int alc = 0,gas = 0, dsl = 0;
    int x;
    while(1)
    {
        scanf("%d", &x);
        if(x==1) alc++;
        else if(x==2) gas++;
        else if(x==3) dsl++;
        else if(x==4) break;
        else continue;
    }
    printf("MUITO OBRIGADO\n");    
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",dsl);
    return 0;
}