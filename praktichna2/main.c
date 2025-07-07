#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int p;
    scanf("%d", &p);
    long long arr[20];
    for (int i = 0; i < p; i++) {
        scanf("%lld", &arr[i]);
    }
    long long result = arr[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, arr[i]);
    }
    printf("%lld\n", result);
    return 0;
}
