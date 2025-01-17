#include <stdio.h>

int main(){
    int colunm, row;
    scanf("%d%d",&row,&colunm);
    int a[colunm*row];
    for (int i = 0; i < colunm*row; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < colunm; i++){
        for (int k = i; k <= colunm*row*(i+1); k += colunm){
            if (k >= colunm*row) break;
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    return 0;
}