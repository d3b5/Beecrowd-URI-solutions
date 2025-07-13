#include<stdio.h>
int main()
{
    int a = 97;
    char b = 'a';

    while(a<=122)
    {
        printf("%d e %c\n",a,b);
        a++;
        b = (int)++b;
    }
    return 0;
}