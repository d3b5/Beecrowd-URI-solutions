#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b = 0;
    cin >> a;

    vector<char>v;
    while(a > 0)
    {
        b = a%16;
        switch(b)
        {
            case 0: v.push_back('0'); break;
            case 1: v.push_back('1'); break;
            case 2: v.push_back('2'); break;
            case 3: v.push_back('3'); break; 
            case 4: v.push_back('4'); break;
            case 5: v.push_back('5'); break;
            case 6: v.push_back('6'); break;
            case 7: v.push_back('7'); break;
            case 8: v.push_back('8'); break;
            case 9: v.push_back('9'); break;
            case 10: v.push_back('A'); break;
            case 11: v.push_back('B'); break;
            case 12: v.push_back('C'); break;
            case 13: v.push_back('D'); break;
            case 14: v.push_back('E'); break;
            case 15: v.push_back('F'); break; 
        }  
        a /= 16;
    }
    for(int i=v.size()-1; i>=0; i--) cout << v[i];
    cout << endl;

    return 0;
}