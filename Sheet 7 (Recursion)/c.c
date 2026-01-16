#include <stdio.h>
void solve(int i)
{
    if(i>=1){
    printf("%d",i);
    if(i>1)
    printf(" ");
    solve(i-1);
    }

}

int main (){
    int n ;

    scanf("%d",&n);
    solve(n);

}

