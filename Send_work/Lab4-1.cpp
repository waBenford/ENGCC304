#include <stdio.h>

int main() {
    long long days, seconds;

    printf("Input Days : ");
    scanf("%lld", &days);

    seconds = days * 24LL * 60LL * 60LL;  // 1 day = 86,400 seconds

    printf("%lld days = %lld seconds\n", days, seconds);
    return 0;
}
