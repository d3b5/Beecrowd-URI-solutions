#include <stdio.h>
#include <string.h>

int main() {
    char a[10];
    int sum = 0;
    int count = 1;
    while (count <= 3) {
        fgets(a, 10, stdin);
        if (a[0] == 'c') {
            printf("%d\n", sum);
            sum = 0;
            count++;
        } else {
            if (strcmp(a, "---\n") == 0) sum += 0;
            else if (strcmp(a, "--*\n") == 0) sum += 1;
            else if (strcmp(a, "-*-\n") == 0) sum += 2;
            else if (strcmp(a, "-**\n") == 0) sum += 3;
            else if (strcmp(a, "*--\n") == 0) sum += 4;
            else if (strcmp(a, "*-*\n") == 0) sum += 5;
            else if (strcmp(a, "**-\n") == 0) sum += 6;
            else if (strcmp(a, "***\n") == 0) sum += 7;
        }
    }
    return 0;
}
