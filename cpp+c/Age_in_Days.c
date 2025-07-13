#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int yr,mon,day = 0;
    
    yr = n/365;
    mon = (n-(yr*365))/30;
    day = (n-(yr*365)-(mon*30));
    printf("%d ano(s)\n", yr);
    printf("%d mes(es)\n",mon);
    printf("%d dia(s)\n",day);


    return 0;
}