#include <stdio.h>
int sum_array(int a[], int n) {
    int sum = 0;
    int *p = a; 
    while (p < a + n) {
        sum += *p; 
        p++;       
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("数组元素和为：%d\n", sum_array(arr, n));
    return 0;
}