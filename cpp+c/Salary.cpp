#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, hr;
    float rate,salary;

    cin >> num>> hr >> rate;
    salary = rate * hr;
    cout << "NUMBER = " << num<<endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl; 
    return 0;
}