#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // 1, 3, 5, 10, 25, 50 and 100.

    if(n == 1)
    {
        cout << "Top 1" << endl;
    }
    else if( n <=3 )
    {
        cout << "Top 3" << endl;
    }
    else if (n <=5)
    {
        cout << "Top 5" << endl;
    }
    else if (n<=10)
    {
        cout << "Top 10" << endl;
    }
    else if(n<=25)
    {
        cout << "Top 25" <<endl;
    }
    else if(n<= 50)
    {
        cout << "Top 50" << endl;
    }
    else
    {
        cout << "Top 100" << endl;
    }
    return 0;
}