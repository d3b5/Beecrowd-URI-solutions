#include <stdio.h>
#include <string.h>

int main() {
    int t, d;
    scanf("%d", &t);
    char h[3], m[3];
    while (t--) {
        scanf("%s %s %d", h, m, &d);
        if (strlen(h) == 1) {
            char temp = h[0];
            h[0] = '0';
            h[1] = temp;
            h[2] = '\0';
        }
        if (strlen(m) == 1) {
            char temp = m[0];
            m[0] = '0';
            m[1] = temp;
            m[2] = '\0';
        }
        printf("%s:%s - A porta ", h, m);
        if (d == 1) printf("abriu!\n");
        else printf("fechou!\n");
    }
    return 0;
}
