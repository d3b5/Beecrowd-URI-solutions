#include<stdio.h>
int main()
{
    long long int a,b = 0;
    scanf("%lld",&a);

    char v[1000];
    int in = -1;
    while(a > 0)
    {
        b = a%16;
        switch(b)
        {
            case 0: v[++in] = '0'; break;
            case 1: v[++in] = '1'; break;
            case 2: v[++in] = '2'; break;
            case 3: v[++in] = '3'; break; 
            case 4: v[++in] = '4'; break;
            case 5: v[++in] = '5'; break;
            case 6: v[++in] = '6'; break;
            case 7: v[++in] = '7'; break;
            case 8: v[++in] = '8'; break;
            case 9: v[++in] = '9'; break;
            case 10: v[++in] = 'A'; break;
            case 11: v[++in] = 'B'; break;
            case 12: v[++in] = 'C'; break;
            case 13: v[++in] = 'D'; break;
            case 14: v[++in] = 'E'; break;
            case 15: v[++in] = 'F'; break; 
        }  
        a /= 16;
    }
    v[++in] = '\0';
    for(int i=in-1; i>=0; i--) printf("%c",v[i]);
    printf("\n");

    return 0;
}