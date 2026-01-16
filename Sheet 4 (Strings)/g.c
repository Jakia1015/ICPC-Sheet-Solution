#include <stdio.h>
int main() {
    char S[100005];
    int i = 0;
    scanf("%s", S);
    while (S[i] != '\0') {
        if (S[i] == ',') {
            S[i] = ' ';
        }
        else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32;   
        }
        else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32;   
        }
        i++;
    }

    printf("%s\n", S);
}
