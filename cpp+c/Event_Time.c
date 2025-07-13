#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,t1,t2,ans,d,h,m,s;
    char a1[5],del;

    scanf("%s %d %d %c %d %c %d",&a1, &d1, &h1, &del, &m1, &del, &s1);
    scanf("%s %d %d %c %d %c %d",&a1, &d2, &h2, &del, &m2, &del, &s2);

    t1 = s1 + m1*60 + h1*3600 + d1*86400;
    t2 = s2 + m2*60 + h2*3600 + d2*86400;
    ans = t2-t1;
    
    d = ans/86400;    
    h = (ans -d*86400)/3600;
    m = (ans - d*86400 - h*3600)/60;
    s = (ans - d*86400 - h*3600-m*60);
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);       

    return 0;
}