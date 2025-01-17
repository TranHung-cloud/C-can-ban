#include <stdio.h>

void readArray(int a[], int n){
    if (n == 0) return;
    else{
        scanf("%d",&a[0]);
        return readArray(a+1,n-1);
    }
}

int main(){

    return 0;
}