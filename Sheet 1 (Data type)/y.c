#include <stdio.h>
int main(){
    long long int  A,B,C,D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long int result =((A%100)*(B%100)*(C%100)*(D%100))%100;
    printf("%02lld\n",result);
}
