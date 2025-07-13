#include<stdio.h>
int main()
{
    double x,tax;
    scanf("%lf", &x);

    if(x>=0 && x<=2000) 
    {
        printf("Isento\n");
        return 0;
    }
    else if(x>= 2000.01 && x<= 3000)
    {
        x = x-2000;
        tax = x*0.08;
    }
    else if(x>= 3000.01 && x<= 4500)
    {
        tax = 1000*0.08;
        x = x -3000;
        tax += (x*0.18);        
    }
    else if(x> 4500)
    {
        tax = 1000*0.08;
        tax += (1500*0.18);
        x = x -4500;
        tax += (x*0.28);
    }

    printf("R$ %.2lf\n",tax);
    return 0;
}