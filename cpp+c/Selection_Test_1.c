//Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).

#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(b > c && d > a && (c+d) > (a+b) && c >0 && d >0 && (a%2==0))
    {
        printf("Valores aceitos\n");
    }
    else printf("Valores nao aceitos\n");
    return 0;
}
