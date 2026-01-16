#include <stdio.h>
void concat(int n, int A[] , int B[]) {
    for( int i= 0; i<n; i++)
        printf("%d ",B[i]);
    for( int i= 0; i<n; i++)
        printf("%d ",A[i]);
}
int main(){
    int n ;
    scanf("%d",&n);
    int A[n] ,B[n];
    for( int i= 0; i<n; i++)
        scanf("%d",&A[i]);
    for( int i= 0; i<n; i++)
        scanf("%d",&B[i]);
        concat(n,A,B);



}

