#include <stdio.h>

int sumArray(int a[], int n){
    if (n == 0) return 0;
    return a[0] + sumArray(a+1, n-1);
}
int main(){

    return 0;
}