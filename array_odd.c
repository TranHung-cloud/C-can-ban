#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i]%2 == 1) count +=1;
    }
    printf("%d\n",count);
    if (count == 0) printf("NONE");
    for (int i = 0; i < n; i++){
        if (a[i]%2 == 1) printf("%d ",a[i]);
    }
    return 0;
}