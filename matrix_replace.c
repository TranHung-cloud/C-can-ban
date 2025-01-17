#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%d",a[i]);
        if (i == n-1) break;
        printf(" ");
    }
    printf("\n");
    int numRP, num;
    scanf("%d%d",&numRP,&num);
    for (int i = 0; i < n; i++){
        if (a[i] == numRP) a[i] = num;
    }
    for (int i = 0; i < n; i++){
        printf("%d",a[i]);
        if (i == n-1) break;
        printf(" ");
    }
    return 0;
}