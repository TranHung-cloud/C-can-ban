#include <stdio.h>

void printList(int a[], int n){
     for (int i = 0; i < n; i++){
          printf("%d",a[i]);
          if (i == n - 1) break;
          printf(" ");
     }
}

int main(){
     int n;
     scanf("%d",&n);
     int a[n];
     for (int i = 0; i < n; i++){
          scanf("%d",&a[i]);
     }
     printList(a,n);
     return 0;
}