#include <stdio.h>
#include <math.h>

int main() {
    int t, x, y;
    int carlos, raf, beto;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &y);
        raf = 9 * pow(x, 2) + pow(y, 2);
        beto = 2 * pow(x, 2) + 25 * pow(y, 2);
        carlos = -100 * x + pow(y, 3);
        if (raf >= beto && raf >= carlos)
            printf("Rafael ganhou\n");
        else if (beto >= raf && beto >= carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    return 0;
}
