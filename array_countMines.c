#include <stdio.h>
#define M 5
#define N 5
#define MINE -1

void count_mines(){
    int B[M][N];
    int T[M][N];
    for (int i = 0; i < M; i++){
        for (int k = 0; k < N; k++){
           B[i][k] = 0; 
           T[i][k] = 0;
        }
    }
    B[1][2] = MINE;
    B[3][1] = MINE;
    for (int i = 0; i < M; i++){
        for (int k = 0; k < N; k++){
            if (B[i][k] == MINE){
                T[i][k] = B[i][k];
                for (int j = i-1; j <= i+1; j++){
                    if ((j == -1) || (j == M)) continue;
                    for (int l = k-1; l <= k+1; l++){
                        if ((l == -1) || (l == N)) continue;
                        if (!(j == i && l == k) && (T[j][l] != -1)){
                        T[j][l] += 1;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < M; i++){
        for (int k = 0; k < N; k++){
            printf("%2d",T[i][k]);
            if (k == N-1) break;
            printf(" ");
        }
    printf("\n");
    }
}
int main(){

    count_mines();
    return 0;
}