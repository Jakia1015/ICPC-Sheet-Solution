#include <stdio.h>
int main(){
int X, i, isPrime = 1;
    scanf("%d", &X);
    if (X < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(X); i++) {
            if (X % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("YES\n");
    else
        printf("NO\n");
}




