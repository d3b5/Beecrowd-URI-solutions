#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);    
    getchar();

    for(int j=1; j<=t; j++)
    {
        char a[1000];
        fgets(a, 1000, stdin);
        int len = strlen(a);

        if (len > 0 && a[len - 1] == '\n') {
            a[len - 1] = '\0';
            len--;
        }

        for(int i=0; i< len; i++)
        {
            if(isalpha(a[i]) != 0)
            {
                a[i] +=3;
            }
        }
        if( len %2 == 0)
        {   
            for(int i=0; i< len/2 ; i++)
            {
                a[i] -= 1; 
            }
        }
        else
        {
            for(int i=0; i<= len/2 ; i++)
            {
                a[i] -= 1; 
            }
        }
        

        int j = strlen(a)-1;
        for(int i=0; i<j ; i++)
        {
            char temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
        }
        a[len] = '\0';
        printf("%s\n",a);
    }

    return 0;
}