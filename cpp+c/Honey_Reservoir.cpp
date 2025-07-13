#include<bits/stdc++.h>
using namespace std;
#define PI 3.14
int main()
{
    double v,d,r,h,a;
    while(cin >> v >> d)
    {
        r = d/2;
        h = v/(PI*pow(r,2));
        a = PI*pow(r,2);
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }
    return 0;
}