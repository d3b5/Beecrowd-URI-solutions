#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char a[50];
    char c[5] = "Thor"; 
    int b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s %d", &a, &b);
        if(strcmp(a,c) == 0) printf("Y\n");
        else printf("N\n");
    }
    

    return 0;
}