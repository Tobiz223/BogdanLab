#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int m = 1; m < n; m++) {
        int q = n / m;
        int r = n % m;
        if (q == r) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
