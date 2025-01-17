#include <stdio.h>

int isSort(int a[], int n){
    for (int i = 0; i < n; i++){
        if ((a[i] > a[i+1]) && i + 1 < n)  return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("%d",isSort(a,n));

    return 0;
}