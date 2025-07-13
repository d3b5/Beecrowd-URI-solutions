#include<stdio.h>
int main()
{
    int num,hr;
    double rate,sal;
    
    scanf("%d %d %lf", &num, &hr, &rate);

    sal = rate * hr;

    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",sal);

    return 0;
}