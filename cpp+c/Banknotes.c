#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n",n);

    int note_100 = n/100;
    printf("%d nota(s) de R$ 100,00\n",note_100);
    
    int note_50 =( n - (note_100*100))/50;
    printf("%d nota(s) de R$ 50,00\n",note_50);
    
    int note_20 =( n - (note_100*100)-(note_50*50))/20;
    printf("%d nota(s) de R$ 20,00\n",note_20);

    int note_10 =( n - (note_100*100)-(note_50*50)-(note_20*20))/10;
    printf("%d nota(s) de R$ 10,00\n",note_10);

    int note_5 =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10))/5;
    printf("%d nota(s) de R$ 5,00\n",note_50);

    int note_2 =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5))/2;
    printf("%d nota(s) de R$ 2,00\n",note_2);

    int note_1 =( n - (note_100*100)-(note_50*50)-(note_20*20)-(note_10*10)-(note_5*5)-(note_2*2));
    printf("%d nota(s) de R$ 1,00\n",note_1);
    return 0;
}