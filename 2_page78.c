#include <stdio.h>
#include <malloc.h>

int find_num(float *a, int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n; k++){
            if (a[i] == a[k] & i != k) return k;
        };
    };
    return -1;
};

void delete(float *a, int locate, int *n){
    for (int k = locate; k < *n; k++){
        a[k] = a[k+1];
    };
    *n -= 1;
};


void swap(float *a, float *b){
    *a += *b;
    *b = *a - *b;
    *a -= *b; 
};

int main(){
    int n, flag_sort = 0, flag_delete = 0;
    scanf("%d", &n);
    float *t;
    t = (float*)malloc(sizeof(float)*n);
    for (int i = 0; i < n; i++){
        scanf("%f",&t[i]);
    };

    while (flag_delete != 1){
        flag_delete = 1;
        if (find_num(t,n) != -1){
            flag_delete = 0;
            delete(t,find_num(t,n),&n);
        };
    };
    while (flag_sort != 1){
        flag_sort = 1;
        for(int i = 1; i < n; i++){
            if (t[i-1] > t[i]){
                swap(&t[i-1],&t[i]);
                flag_sort = 0;
            };
        };
    };

    for (int i = 0; i < n; i++){
        printf("%.2f ",t[i]);
    };
    free(t);
    return 0;
};