#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    printf("%d\n",sum);
    for (int i = 0; i < n; i++){
        printf("%d",a[i]);
        if (i == n - 1) break;
        printf(" ");
    }
    return 0;
}