#include <stdio.h>
#include <malloc.h>

int test(float *a, int n){
    for (int i = 1; i < n; i++){
        if (a[i-1] > a[i]) return 0;
    };
    return 1;
};

int locate(float *a, int n, int num){
    int locate;
    for (int i = 0; i < n; i++){
        if (num > a[i]) locate = i;
    };
    return locate;
};

void insert(float *a, int *n, int num){
    *n += 1;
    for (int i = *n; i > locate(a, *n-1, num); i--){
        a[i] = a[i-1];
    };
    a[locate(a, *n-1, num)] = num;
};

int main(){
    float *t, num;
    int n, check = 0;

    scanf("%d",&n);
    while (check != 1){
        t = (float *)malloc(sizeof(float)*n);
        for (int i = 0; i < n; i++){
            scanf("%f",&t[i]);
        };
        check = test(t, n);
        if (check == 1) break;
        printf("nhập sai r, nhập lại\n");
        free(t);
    };
    scanf("%f", &num);
    insert(t, &n, num);
    for (int k = 0; k < n; k++){
        printf("%.2f ",t[k]);
    };


    free(t);
    return 0;
};