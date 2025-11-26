#include <stdio.h>
#include <stdbool.h> 
bool search(int a[], int n, int key) {
    int *p = a; 
    while (p < a + n) {
        if (*p == key) {
            return true;
        }
        p++; 
    }
    return false;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int key, n = sizeof(arr) / sizeof(arr[0]);

    printf("请输入要搜索的数：");
    scanf("%d", &key);

    if (search(arr, n, key)) {
        printf("找到该数\n");
    } else {
        printf("未找到该数\n");
    }
    return 0;
}