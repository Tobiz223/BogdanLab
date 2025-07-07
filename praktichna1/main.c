#include <stdio.h>

int main() {
    int t1, t2, t3;

    printf("Enter the time:\n");
    printf("Guest 1: ");
    scanf("%d", &t1);

    printf("Guest 2: ");
    scanf("%d", &t2);

    printf("Guest 3: ");
    scanf("%d", &t3);

    double rate1 = 1.0 / t1;
    double rate2 = 1.0 / t2;
    double rate3 = 1.0 / t3;

    double total_rate = rate1 + rate2 + rate3;

    double total_time = 1.0 / total_rate;

    printf("Time required to eat one pie together: %.2f hours\n", total_time);

    return 0;
}
