#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]); 
    }
    for (int i = 0; i < n; i++) {  
        if (a[i] > 0)
            a[i] = 1;
        else if (a[i] < 0)
            a[i] = 2;
        else
            a[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%lld ", a[i]);
    }

}


