#include <stdio.h>

float getAVG(int a[], int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum/n;
}

int main(){
    int A[]={1,2,3,4}; //Mang A
    int n,i;
    n = sizeof(A)/sizeof(int); // So phan tu

    for(i=0;i<=n-1;i++)
        printf("%d ",A[i]);
    printf("\nAVG %.4f",getAVG(A,n));
    return 0;
}