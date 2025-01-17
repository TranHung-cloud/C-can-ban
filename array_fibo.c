#include <stdio.h>

void getFibo(int a[], int n){
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= n; i++){
        a[i] = a[i-1] + a[i-2];
    }
}

int main(){
    int A[50];
    int i,n;
    n=10;
    getFibo(A,n);
    for(i=0;i<=n;i++)
        printf("%d ",A[i]);
    return 0;
}