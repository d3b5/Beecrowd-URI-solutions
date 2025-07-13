#include <stdio.h>
 
int main() {
 
    int cnt = 0;
    int x;
    scanf("%d", &x);
    
    for(int i = x; cnt !=6; i++)
    {
        if(i % 2  != 0) 
        {
            printf("%d\n",i);
            cnt++;
        }
    }
 
    return 0;
}