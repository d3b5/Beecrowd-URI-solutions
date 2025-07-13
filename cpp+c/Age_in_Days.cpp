#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //n in days
    cin >> n;
    int yr = n/365 ;
    int months = (n -(yr*365))/30;
    int days = (n -(yr*365) - (months*30));

    cout<< yr << " ano(s)" <<endl;
    cout<< months << " mes(es)" <<endl;
    cout<< days << " dia(s)" <<endl;
    return 0;
}