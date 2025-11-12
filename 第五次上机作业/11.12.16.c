#include <stdio.h>
#define N 3  
int main() {
    int mat[N][N] = {0};
    int i=0, j=N/2;
    for(int num=1; num<=N*N; num++) {
        mat[i][j] = num;
        int ni = (i-1 + N) % N;
        int nj = (j+1) % N;
        if(mat[ni][nj] != 0) i = (i+1) % N;
        else { i=ni; j=nj; }
    }
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) printf("%d\t", mat[i][j]);
        printf("\n");
    }
    return 0;
}