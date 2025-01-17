#include <stdio.h>

int isPalindrome(int a[], int n){
    int flag = 1;
    for (int i = 0; i < n; i++){
        if (a[i] != a[n-1-i])   flag = 0;
    }
    return flag;
}

int main(){
    int A[]={-1,1, 1,-1};
    int n = sizeof(A)/sizeof(int);
    if (isPalindrome(A,n))
        printf("YES");
    else
        printf("NO");

    return 0;
}