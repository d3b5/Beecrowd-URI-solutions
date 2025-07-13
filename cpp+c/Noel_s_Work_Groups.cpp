#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string a, b;
    int c;
    int bonecos = 0, arquitetos = 0, musicos = 0, desenhistas = 0;
    
    while(t--) {
        cin >> a >> b >> c;
        if(b == "bonecos") bonecos += c;
        else if(b == "arquitetos") arquitetos += c;
        else if(b == "musicos") musicos += c;
        else if(b == "desenhistas") desenhistas += c;
    }
    
    int totalGifts = int(bonecos / 8) + int(arquitetos / 4) + int(musicos / 6) + int(desenhistas / 12);
    cout << totalGifts << endl;
    return 0;
}
