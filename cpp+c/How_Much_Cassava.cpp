// 1.Curupira eats 300
// 2.Boitatá eats 1500
// 3.Boto eats 600
// 4.Mapinguari eats 1000
// 5.Iara eats 150
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    int sum = (a*300) + (1500*b) + (600*c) + (1000*d) + (150*e) +225;
    cout << sum << endl;
    return 0;
}