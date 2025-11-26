#include <stdio.h>
int main() {
    int arr[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int target, *p = arr;
    int found = 0, pos = -1;

    printf("请输入要查找的数：");
    scanf("%d", &target);
    for (int i = 0; i < 15; i++, p++) {
        if (*p == target) {
            found = 1;
            pos = i + 1; 
            break;
        }  
        if (*p > target) break;
    }

    if (found) {
        printf("找到该数，位置为：%d\n", pos);
    } else {
        printf("No Found\n");
    }
    return 0;
}