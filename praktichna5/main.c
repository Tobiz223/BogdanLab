#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mod = 12345;

    int dp[n+1][3];

    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = ((dp[i-1][0] + dp[i-1][1]) % mod + dp[i-1][2]) % mod;
        dp[i][1] = dp[i-1][0] % mod;
        dp[i][2] = dp[i-1][1] % mod;
    }

    int result = ((dp[n][0] + dp[n][1]) % mod + dp[n][2]) % mod;
    printf("%d\n", result);

    return 0;
}
