#include <stdio.h>
#include <string.h>
int main(){
    char str[1003];
    scanf("%s", str);
    int n = strlen(str);
    int first = 0;
    int last = n - 1;
    while (first < last) {
        if (str[first] != str[last]) {
            printf("NO\n");
            return 0;
        }
        first++;
        last--;
    }

    printf("YES\n");
}

