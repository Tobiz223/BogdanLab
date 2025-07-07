#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main() {
    char word[15];
    scanf("%s", word);

    int freq[256] = {0};
    int len = strlen(word);

    for (int i = 0; i < len; i++)
        freq[(unsigned char)word[i]]++;

    unsigned long long denom = 1;
    for (int i = 0; i < 256; i++)
        if (freq[i] > 1)
            for (int j = 2; j <= freq[i]; j++)
                denom *= j;

    unsigned long long res = factorial(len) / denom;

    printf("%llu\n", res);

    return 0;
}
