#include <stdio.h>

int countX(int x, int a[], int n){
    int result = 0;
    for (int i = 0; i < n; i++){
        if (x == a[i]) result += 1;
    }
    return result;
}

int main(){
    int A[]={1,2,3,4,3};
    int i, count;
    int n = sizeof(A)/sizeof(int);
    for(i=0;i<=n-1;i++)
        printf("%d ",A[i]);
    count=countX(3,A,n);
    printf("\n%d",count);
    return 0;
}