#include<stdio.h>
int main()
{
    int a,b,op,a_tot = 0,b_tot = 0,draw = 0,n = 0; // a for inter, b for germio, n is total games

    do
    {
        scanf("%d %d", &a, &b);
        if(a>b)a_tot++;
        else if (a<b) b_tot++;
        else draw++;
        n++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
    } while(op == 1);

    printf("%d grenais\n",n);
    printf("Inter:%d\n",a_tot);
    printf("Gremio:%d\n",b_tot);
    printf("Empates:%d\n",draw);
    if(a>b) printf("Inter venceu mais\n");
    else if(a<b) printf("Gremio venceu mais\n");
    else printf("Não houve vencedor");

    return 0;
}