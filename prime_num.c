#include <stdio.h>

int prime(int n){
    int flag = 1;
    if (n <= 1) flag == 0;
    if ( n == 2) flag = 1;
    for (int i = 2; i*i < n; i++){
        if (n%i == 0){
            flag == 0;
        }
    if (flag == 1) return 1;
    if (flag == 0) return 0;
    }
}
int count(int a, int b){
    int total = 0;
    for (a ; a <= b; a++){
        if (prime(a) == 1){
            total += 1;
        }
    }
    return total;
}
int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d",count(a,b));
    return 0;
}