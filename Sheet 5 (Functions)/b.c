#include <stdio.h>
int printNumbers(int n) {
    for(int i=1; i<=n; i++) {
        printf("%d", i);
        if(i <n)
            printf(" ");
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printNumbers(n);
}
