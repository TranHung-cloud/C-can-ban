#include <stdio.h>

void printArray(int a[], int n){
    printf("%d",a[n-1]);
    if (n != 1) printf("\n");
    else return;
    return printArray(a, n - 1);

}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printArray(a,n);
    return 0;
}