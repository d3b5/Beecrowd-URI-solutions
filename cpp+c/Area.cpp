#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double tri_area = (0.5) * c * a;

    double pi = 3.14159;
    double cir_area = pi *c*c;

    double trap_area = (0.5)*(a+b)*c;

    double sqr_area = b*b;

    double rect_area = a*b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << tri_area << endl;

    cout << "CIRCULO: " << fixed << setprecision(3) << cir_area << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trap_area << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << sqr_area << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rect_area << endl;
    return 0;
}