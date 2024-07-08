#include <stdio.h>

long long count_numbers(int r) {
    if (r == 1) return 2;
    if (r == 2) return 4;

    long long dp[r + 1][4];
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[1][3] = 0;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[2][3] = 1;

    for (int i = 3; i <= r; i++) {
        dp[i][0] = dp[i - 1][2] + dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][3] + dp[i - 1][0] + dp[i - 1][1];
        dp[i][2] = dp[i - 1][0];
        dp[i][3] = dp[i - 1][1];
    }

    return dp[r][0] + dp[r][1] + dp[r][2] + dp[r][3];
}

int main() {
    int r;
    printf("Введіть кількість розрядів:\n");
    scanf("%d", &r);
    long long result = count_numbers(r);
    printf("Кількість чисел з %d розрядів: %lld\n", r, result);
    return 0;
}
