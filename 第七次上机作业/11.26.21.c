#include <stdio.h>
void print_1d_array(int **pp, int n) {
    printf("一维数组元素：");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(*(pp + i)));
    }
    printf("\n");
}
void print_2d_array(int **pp, int row, int col) {
    printf("二维数组元素：\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(*(pp + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int arr1[10];
    int *p1[10]; 
    int **pp1 = p1; 

    printf("请输入10个一维数组元素:");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
        p1[i] = &arr1[i]; 
    }
    print_1d_array(pp1, 10);

   
    int arr2[3][4];
    int *p2[3]; 
    int **pp2 = p2; 

    printf("\n请输入3行4列二维数组元素:\n");
    for (int i = 0; i < 3; i++) {
        p2[i] = arr2[i]; 
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    print_2d_array(pp2, 3, 4);

    return 0;
}