#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,maior,max;
    
    cin >> a >> b >> c;
    maior = (a+b+ abs(a-b))/2;
    max = (maior + c + abs(maior - c))/2;
    cout << max << " eh o maior" << endl;

    return 0;
}