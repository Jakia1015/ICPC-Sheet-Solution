#include <stdio.h>
int main() {
  int N;
  scanf("%d", &N);
   long long  num, max = 0;
    for  (int i = 0; i < N; i++) {
        scanf("%lld", &num);
        if (i == 0 || num > max) {
            max = num;
        }
    }
    printf("%lld\n", max);
}
