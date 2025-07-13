#include<stdio.h>
int main()
{
    double a, b,c, tri,circ,trap,sqr,rect;
    scanf("%lf %lf %lf", &a, &b, &c);

    tri = 0.5 * a* c;
    circ =  3.14159 * c * c;
    trap = (a+b)*(c/2);
    sqr = b*b;
    rect = a*b;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",circ);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",sqr);
    printf("RETANGULO: %.3lf\n",rect);
    return 0;
}