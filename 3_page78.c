#include <stdio.h>
#include <malloc.h>

float max(float *a, int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]) max = a[i];
    };
    return max;
};

float min(float *a, int n){
    int min = a[0];
    for (int i = 0; i < n; i++){
        if (min > a[i]) min = a[i];
    };
    return min;
};

float sum(float *a, int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    };
    return sum;
};

int main(){
    float *t;
    int n;

    scanf("%d", &n);
    t = (float *)malloc(sizeof(float)*n);
    for (int i = 0; i < n; i++){
        scanf("%f",&t[i]);
    };
    printf("Phần tử lớn nhất: %.2f",max(t,n));
    printf("\n");
    printf("Phần tử nhỏ nhất: %.2f",min(t,n));
    printf("\n");
    printf("tổng: %.2f",sum(t,n));

    free(t);
    return 0;
};