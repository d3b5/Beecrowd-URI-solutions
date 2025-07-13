#include <stdio.h>

int main() {
    int n, num = 0, b = 2;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    while (b <= 5) {
        for (int i = 0; i < n; i++) {
            if (a[i] % b == 0) num++;
        }
        printf("%d Multiplo(s) de %d\n", num, b);
        b++;
        num = 0;
    }
    return 0;
}
