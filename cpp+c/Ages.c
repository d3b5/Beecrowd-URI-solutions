#include<stdio.h>
int main()
{
    int age,cnt;
    cnt = 0;
    double avg = 0;

    while(1)
    {
        scanf("%d", &age);
        if(age <0) break;
        else
        {
            avg +=age;
            cnt++;
        }
    }
    avg = avg/cnt;
    printf("%.2lf\n",avg);
    return 0;
}