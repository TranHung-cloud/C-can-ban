#include <stdio.h>

void copyOddNumbers(int a[], int n, int b[], int *pM){
    *pM = 0;
    for (int i = 0; i < n; i++){
        if (a[i]%2 == 1){
            b[*pM] = a[i];
            *pM += 1;
        }
    }
    printf("\n");
}
void printList(int b[], int n){
    for (int i = 0; i < n; i++){
        printf("%d",b[i]);
        if (i == n-1) break;
        printf(" ");
    }
}

int main(){
    int a[]={2, 4, 6, 8};
    int b[1000];
    int m,n;

    n = sizeof(a)/sizeof(int);
    printList(a,n);
    copyOddNumbers(a,n,b,&m);
    printList(b,m);
    return 0;
}