#include <stdio.h>

int main() 
{
    int a[15];
    int i;
    for( i = 0; i < 15; i++) scanf("%d", &a[i]);

    int odd[5];
    int even[5];
    int odd_count = 0;
    int even_count = 0;

    for(i = 0; i < 15; i++) {
        if(a[i] % 2 == 0) even[even_count++] = a[i];
        else odd[odd_count++] = a[i];

        if(odd_count == 5) 
        {
            for(int j = 0; j < 5; j++) 
            {
                printf("impar[%d] = %d\n", j, odd[j]);
            }
            odd_count = 0;
        }
        if(even_count == 5)
        {
            for(int j = 0; j < 5; j++)
            {
                printf("par[%d] = %d\n", j, even[j]);
            }
            even_count = 0;
        }
    }

    for(int j = 0; j < odd_count; j++) 
    {
        printf("impar[%d] = %d\n", j, odd[j]);
    }

    for(int j = 0; j < even_count; j++) 
    {
        printf("par[%d] = %d\n", j, even[j]);
    }

    return 0;
}
