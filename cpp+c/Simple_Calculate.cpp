#include<bits/stdc++.h>
using namespace std;
int main()
{
    int code1, unit1, code2, unit2;
    double price1, price2,bill;

    cin >> code1 >> unit1 >> price1 >> code2 >> unit2 >> price2;

    bill = (price1 * unit1) + (price2 * unit2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << bill << endl;
    return 0;
}