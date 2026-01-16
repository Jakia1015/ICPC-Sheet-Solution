#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%lld\n", fib[n - 1]);

    return 0;
}
