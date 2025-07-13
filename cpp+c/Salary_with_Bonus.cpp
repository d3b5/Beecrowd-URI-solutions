#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    double salary,sell,net;
    cin >> name >> salary >> sell;

    net = salary + (0.15 * sell);
    cout << "TOTAL = R$ "<< fixed << setprecision(2) << net << endl;
    return 0;
}