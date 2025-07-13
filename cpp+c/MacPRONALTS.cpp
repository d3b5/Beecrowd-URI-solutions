/*1001 | R$ 1.50
1002 | R$ 2.50
1003 | R$ 3.50
1004 | R$ 4.50
1005 | R$ 5.50*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float sum = 0;
    int code,quantity;

    while(t--)
    {
        cin >> code >> quantity;
        if(code == 1001) sum += (1.5 * quantity);
        else if(code == 1002) sum+= (2.5 * quantity);
        else if(code == 1003) sum+= (3.5 * quantity);
        else if(code == 1004) sum+= (4.5 * quantity);
        else if(code == 1005) sum += (5.5 *quantity);
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}