#include<bits/stdc++.h>
using namespace std;
int main()
{
    int humans, elves, dwarves, orcs, wargs, eagles;
    cin >> humans >> elves >> dwarves >> orcs >> wargs >> eagles;
    //humans, elves and dwarves (the good side)
    int good = humans + elves + dwarves + eagles;
    int bad = orcs + wargs;

    if(good >= bad) printf("Middle-earth is safe.\n");
    else printf("Sauron has returned.\n");
    return 0;
}