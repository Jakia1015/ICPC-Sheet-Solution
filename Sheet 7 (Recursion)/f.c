#include <stdio.h>
void printEven(long long a[], int i)
{
    if(i < 0)
        return;
    if(i % 2 == 0)
        printf("%lld ", a[i]);

    printEven(a ,i - 1);

}
int main(){
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i = 0; i < n; i++)
       scanf("%lld",&a[i]);
    printEven(a,n - 1);
        return 0;






}
