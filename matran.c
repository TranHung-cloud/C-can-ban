#include <stdio.h>

int main(){
    int colunm, row, i = 0, x, colunmX, rowX;
    scanf("%d%d",&row,&colunm);
    colunmX = colunm;
    rowX = row;
    int a[colunm*row];
    for (int i = 0; i < colunm*row; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for (int k = 1; k <= row; k++){
        for (i = (k - 1)*colunmX; i < colunmX*k; i++){
            printf("%d",a[i]);
            if (i == colunmX - 1) break;
            printf(" ");
        }
        printf("\n");
    }
    rowX = 0;
    colunmX = 0; 
    int count = 0;
    for (int j = 0; j < colunm*row; j++){
        if (x == a[j]){
            colunmX = j;
            count += 1;
            while (colunmX > (colunm - 1)){
                colunmX -= colunm;
                rowX += 1;
            }
            printf("(%d, %d) ",rowX,colunmX);
        }
}
        if (count != 0) printf("\n");

        printf("%d",count);
    return 0;
}