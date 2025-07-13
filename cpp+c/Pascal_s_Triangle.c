#include <stdio.h>
#include <math.h>

int main() {
    int t, a;
    long long int ans;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &a);
        ans = pow(2, a) - 1;
        printf("%lld\n", ans);
    }
    return 0;
}
