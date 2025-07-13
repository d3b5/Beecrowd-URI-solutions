#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(); 

    for(int j=1; j<=t; j++)
    {
        string a;
        getline(cin,a);

        for(int i=0; i< a.size(); i++)
        {
            if(isalpha(a[i]) != 0)
            {
                a[i] +=3;
            }
        }
        if(a.size() %2 == 0)
        {   
            for(int i=0; i< (a.size())/2 ; i++)
            {
                a[i] -= 1; 
            }
        }
        else
        {
            for(int i=0; i<= (a.size())/2 ; i++)
            {
                a[i] -= 1; 
            }
        }
        reverse(a.begin(), a.end()); 

        cout << a << endl;
    }

    return 0;
}