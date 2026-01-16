#include <stdio.h> 
void average(int n, double a[]) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    double average = sum/n;
    printf("%.7f\n", average);
 
}
    
 
 
int main() {
    int n;
    scanf("%d", &n);
    double a[100000];
 
    for(int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
 
     average(n,a);
    
 
}




