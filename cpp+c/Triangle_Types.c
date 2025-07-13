#include<stdio.h>
int main()
{
    double ar[3];

    for(int i=0; i<3; i++)
    {
        scanf("%lf", &ar[i]);
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = i+1; j<3;j++)
        {
            if(ar[i] < ar[j])
            {
                double temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        
    }

    //printf("%.1lf %.1lf %.1lf", ar[0],ar[1],ar[2]);
    
    double a = ar[0];
    double b = ar[1];
    double c = ar[2];

    //if A ≥ B + C, write the message: NAO FORMA TRIANGULO
    // if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    // if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    // if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    // if the three sides are the same size, write the message: TRIANGULO EQUILATERO
    // if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES

    if(a >= b+c)
    {
        printf("NAO FORMA TRIANGULO\n"); 
        return 0;
    }
    if((a*a) == ((b*b) + (c*c))) printf("TRIANGULO RETANGULO\n");
    if((a*a) > ((b*b) + (c*c))) printf("TRIANGULO OBTUSANGULO\n");
    if((a*a) < ((b*b) + (c*c))) printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b == c) printf("TRIANGULO EQUILATERO\n");
    if((a == b && a !=c) || (b == c && b!=a) || (c == a && c!=a)) printf("TRIANGULO ISOSCELES\n");
    
    return 0;
}