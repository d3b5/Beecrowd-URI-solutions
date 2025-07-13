#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int b, sum = 0,jeep = 0;
    
    while(1)
    {
        scanf("%s %d", &a, &b);
        if(strcmp(a,"ABEND")==0) break;
        if(strcmp(a,"SALIDA")==0)
        {
            jeep++;
            sum += b;
        }
        else if (strcmp(a,"VUELTA")==0)
        {
            jeep--;
            sum -= b;
        }
    }
    if(sum <0) sum = -sum;
    if(jeep<0) jeep = -jeep;
    printf("%d\n%d\n",sum,jeep);

    return 0;

}