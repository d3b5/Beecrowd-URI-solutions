#include <stdio.h>
#include <stdbool.h>

bool findcard(int a[], int n, int val) {
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            flag = true;
            break;
        }
    }
    return flag;
}

bool isDuplicate(int arr[], int index, int val) {
    for (int i = 0; i < index; i++) {
        if (arr[i] == val) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, a;
    scanf("%d %d", &n, &a);

    int total[n];
    int buy[a];

    int buyIndex = 0;
    for (int i = 0; i < a; i++) {
        int x;
        scanf("%d", &x);
        if (!isDuplicate(buy, buyIndex, x)) {
            buy[buyIndex++] = x;
        }
    }
    
    for (int i = 0; i < n; i++) {
        total[i] = i + 1;
    }

    int cnt = 0;

    for (int i = 0; i < buyIndex; i++) {
        if (findcard(total, n, buy[i]) == true) {
            cnt++;
        }
    }
    int need = n - cnt; 
    printf("%d\n", need);

    return 0;
}
