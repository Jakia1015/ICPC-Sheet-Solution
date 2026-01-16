#include <stdio.h>
int main(){
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long mn = a, mx = a;
    if (b > mx) mx =b;
    if (b < mn) mn = b;
    if (c > mx) mx =c;
    if (c < mn) mn = c;
    printf("%lld %lld\n", mn, mx);
}

