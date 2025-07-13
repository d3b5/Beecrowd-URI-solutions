#include<bits/stdc++.h>
using namespace std;
int main()
{
    float p1,p2,p3,p4,p5,p;

    p1 = 4;
    p2 = 4.5;
    p3 = 5;
    p4 = 2;
    p5 = 1.5;

    int x,y;
    cin >> x >> y; 

    switch(x)
    {
        case 1:
        {
            p = y*p1;
            break;
        }
        case 2:
        {
            p = y*p2;
            break;
        }
        case 3:
        {
            p = y*p3;
            break;
        }
        case 4:
        {
            p = y*p4;
            break;
        }
        case 5:
        {
            p = y*p5;
            break;
        }
    }
    cout << "Total: R$ " <<fixed << setprecision(2) << p << endl;
    return 0;
}