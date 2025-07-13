#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

    char a1[100] ;
    char a2[10];
    char b1[100];
    char b2[10];
    char a[10]= "PAR";
    char b[10]= "IMPAR";

    long long int c,d;

    while(t--)
    {
        scanf("%s %s %s %s %lld %lld", &a1, &a2, &b1, &b2, &c, &d);

        if((c+d)%2 == 0)
        {
            if(strcmp(a,a2) == 0) printf("%s\n",a1);
            else printf("%s\n",b1);
        }
        else
        {
            if(strcmp(b,a2) == 0) printf("%s\n",a1);
            else printf("%s\n",b1);
        }
    }
    return 0;
}