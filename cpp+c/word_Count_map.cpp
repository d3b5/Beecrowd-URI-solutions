#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);
    map<string,int>mp;
    while(ss >> word)
    {
        mp[word]++;
    }
//way 1
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
//way 2
    cout << mp["madrid"] << endl;
    return 0;
}