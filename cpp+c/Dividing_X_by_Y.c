#include <stdio.h>
int main() {
    double t,x,y,ans;
    scanf("%lf",&t);
    
    while(t--)
    {
        scanf("%lf %lf", &x, &y);
        if(y==0) 
        {
            printf("divisao impossivel\n");
        }
        else
        {
            ans = x/y;
            printf("%.1lf\n",ans);
        }
        
    }
    

    return 0;
}