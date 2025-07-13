#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int pa,pb;
        scanf("%d %d", &pa, &pb);
        double ga,gb;
        scanf("%lf %lf", &ga, &gb);
        int anos=0;

        while(1)
        {
            pa += ((pa*ga)/100.00);
            pb += (pb*gb/100.00);  
            anos++;
            if(anos > 100 || pa>pb) break;
        }
        if(anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",anos);
    }
    return 0;
}