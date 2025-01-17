#include <stdio.h>

int main(){
    int colunm, row;
    scanf("%d",&row);
    colunm = row;
    long long int a[row][colunm];
    for (int i = 0; i < row; i++){
        for (int k = 0; k < i+1; k++){
            if (k == 0 || k == i) a[i][k] = 1;
            else{
            a[i][k] = a[i-1][k] + a[i-1][k-1];
            }
            printf("%lld",a[i][k]);
            if (k == i) break;
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}