#include <stdio.h>
#include <malloc.h>

void swap(float *a, float *b){
    *a += *b;
    *b = *a - *b;
    *a -= *b; 
};

int main(){
    int n, flag = 0;

    scanf("%d", &n);
    float *t;
    t = (float*)malloc(sizeof(float)*n);
    for (int i = 0; i < n; i++){
        scanf("%f",&t[i]);
    };

    while (flag != 1){
        flag = 1;
        for(int i = 1; i < n; i++){
            if (t[i-1] > t[i]){
                swap(&t[i-1],&t[i]);
                flag = 0;
            };
        };
    };
    
    for (int i = 0; i < n; i++){
        printf("%.2f ",t[i]);
    };
    free(t);
    return 0;
};