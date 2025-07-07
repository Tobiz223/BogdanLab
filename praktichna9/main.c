#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    long long d = (long long)y - (long long)x;
    if (d == 0) return 0;

    int k = (int)sqrt(d);

    if (d == (long long)k * k)
        return 2 * k - 1;
    else if (d <= (long long)k * k + k)
        return 2 * k;
    else
        return 2 * k + 1;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", min_steps(x, y));
    return 0;
}
