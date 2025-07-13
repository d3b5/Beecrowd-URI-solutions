#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main() {
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        printf("%.2lf\n", 5 * (tan(PI * a / 180) * b + c));
    }
    return 0;
}
