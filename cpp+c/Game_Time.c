#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    if(a == b) printf("O JOGO DUROU 24 HORA(S)\n");
    else if(a<b) printf("O JOGO DUROU %d HORA(S)\n",abs(b-a));
    else 
    {
        int d = (24-a) + b;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
    return 0;
}