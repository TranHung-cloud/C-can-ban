#include <stdio.h>

int main(){
    int n, max, min;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    for (int i = 0; i < n; i++){
        printf("%d",a[i]);
        if (i == n-1) break;
        printf(" ");
    }
    printf("\n%d %d",min,max);

    return 0;
}