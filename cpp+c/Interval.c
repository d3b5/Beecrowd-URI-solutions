//intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message “Fora de intervalo” that means "Out of Interval".
#include<stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);

    if(n <0 || n>100) printf("Fora de intervalo\n");
    else if( n>=0 && n<=25) printf("Intervalo [0,25]\n");
    else if( n>25 && n<=50) printf("Intervalo (25,50]\n");
    else if( n>50 && n<=75) printf("Intervalo (50,75]\n");
    else if( n>75 && n<=100) printf("Intervalo (75,100]\n");

    return 0;
}