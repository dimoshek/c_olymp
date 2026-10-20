#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main(void) {
    long long a, b, c, n;
    scanf("%lld %lld %lld", &a, &b, &c);
    scanf("%lld", &n);

    long long k = lcm(lcm(a, b), c);
    long long res = k * n;

    printf("%lld\n", res);

    return 0;
}
