#include <stdio.h>

long long dp[31][2][3];

int main() {
    int p;
    scanf("%d", &p);

    dp[1][0][1] = 1;
    dp[1][1][1] = 1;

    for (int i = 1; i < p; i++) {
        for (int d = 0; d <= 1; d++) {
            for (int c = 1; c <= 2; c++) {
                if (dp[i][d][c] == 0) continue;
                for (int nd = 0; nd <= 1; nd++) {
                    if (nd == d && c == 2) continue;
                    int nc = (nd == d) ? c + 1 : 1;
                    dp[i + 1][nd][nc] += dp[i][d][c];
                }
            }
        }
    }

    long long result = 0;
    for (int d = 0; d <= 1; d++)
        for (int c = 1; c <= 2; c++)
            result += dp[p][d][c];

    printf("%lld\n", result);
    return 0;
}
