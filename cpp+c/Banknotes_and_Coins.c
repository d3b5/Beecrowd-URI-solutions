#include<stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);

//NOTES    
    printf("NOTAS:\n");

    int note_100 = n/100;
    printf("%d nota(s) de R$ 100.00\n",note_100);
    
    int note_50 =( n - (note_100*100))/50;
    printf("%d nota(s) de R$ 50.00\n",note_50);
    
    int note_20 =( n - (note_100*100)-(note_50*50))/20;
    printf("%d nota(s) de R$ 20.00\n",note_20);

    int note_10 =( n - (note_100*100)-(note_50*50)-(note_20*20))/10;
    printf("%d nota(s) de R$ 10.00\n",note_10);

    int note_5 =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10))/5;
    printf("%d nota(s) de R$ 5.00\n",note_5);
    
    int note_2 =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5))/2;
    printf("%d nota(s) de R$ 2.00\n",note_2);

//COINS

    printf("MOEDAS:\n");
    int coin_1 =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2));
    printf("%d moeda(s) de R$ 1.00\n",coin_1);
    

    // double left = ( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2)-(coin_1));
    // printf("\nLeft: %.2lf\n", left);



    int coin_50c =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2)-(coin_1))/0.50;
    printf("%d moeda(s) de R$ 0.50\n",coin_50c);

    int coin_25c =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2)-(coin_1)-(coin_50c*0.5))/0.25;
    printf("%d moeda(s) de R$ 0.25\n",coin_25c);
    
    int coin_10c =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2)-(coin_1)-(coin_50c*0.5) -(coin_25c*0.25))/0.10;
    printf("%d moeda(s) de R$ 0.10\n",coin_10c);

    int coin_05c =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2)-(coin_1)-(coin_50c*0.5) -(coin_25c*0.25)-(coin_10c*0.10))/0.05;
    printf("%d moeda(s) de R$ 0.05\n",coin_05c);

    int coin_01c =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2)-(coin_1)-(coin_50c*0.5) -(coin_25c*0.25)-(coin_10c*0.10) -(coin_05c*0.05))/0.01;
    printf("%d moeda(s) de R$ 0.01\n",coin_01c);
    return 0;
}