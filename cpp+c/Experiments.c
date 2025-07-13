#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int c = 0;
    int r = 0;
    int s = 0;
    int x;
    char animal;

    while(n--)
    {
        scanf("%d %c", &x, &animal);

        if(animal == 'C') c+=x;
        else if(animal == 'R') r+=x;
        else s+=x;
    }
    int total = c+r+s;
    double pc = (c*100.00)/total; 
    double pr = (r*100.00)/total; 
    double ps = (s*100.00)/total; 
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",pc);
    printf("Percentual de ratos: %.2lf %%\n",pr);
    printf("Percentual de sapos: %.2lf %%\n",ps);
    
    return 0;
}