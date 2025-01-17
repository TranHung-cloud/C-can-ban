#include <stdio.h>

int main(){
    int colunm,row;
    scanf("%d%d",&row,&colunm);
    int a[row][colunm];
    for (int i = 0; i < row; i++){
        for (int k = 0; k < colunm; k++){
            scanf("%d",&a[i][k]);
            printf("%d",a[i][k]);
            if (k == colunm-1) break;
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}