#include <stdio.h>
void solve(int i, int n, long long multi)
{
    if(i>n){
        printf("%lld", multi);
    }
    else{
        solve(i+1, n, multi*i);
    }
}

int main (){
    int n ;
    scanf("%d",&n);
    solve(1, n, 1);


}

