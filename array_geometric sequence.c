#include <stdio.h>

int isSeries(int k, int a[], int n){
    int flag = 1;
    if (a[0] != 1) flag = 0;
    for (int i = 1; i < n; i++){
        if (a[i] != a[i-1]*k) flag = 0;
    }
    return flag;
}

int main(){

    return 0;
}