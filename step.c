#include <stdio.h>

/*int count(int row, int colunm){
    int a = 0, b = 0;
    if (a == row && b == colunm) return 0;
    if (a < row) return count(a + 1, b) + 1;
    if (b < colunm) return count(a, b + 1) + 1;
}
*/
int main (){
    int row, colunm;
    scanf("%d%d", &row, &colunm);
    printf("%d",count(row, colunm));
}