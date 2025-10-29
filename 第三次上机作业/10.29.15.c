#include <stdio.h>

int main() {
    int num, temp, digit1, digit2, digit3, digit4, digit5, count = 0;

    printf("请输入一个不多于 5 位的正整数：");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        count++;
        switch (count) {
            case 1:
                digit1 = temp % 10;
                break;
            case 2:
                digit2 = temp % 10;
                break;
            case 3:
                digit3 = temp % 10;
                break;
            case 4:
                digit4 = temp % 10;
                break;
            case 5:
                digit5 = temp % 10;
                break;
        }
        temp /= 10;
    }
    printf("它是 %d 位数\n", count);
    printf("每一位数字：");
    switch (count) {
        case 5:
            printf("%d ", digit5);
        case 4:
            printf("%d ", digit4);
        case 3:
            printf("%d ", digit3);
        case 2:
            printf("%d ", digit2);
        case 1:
            printf("%d ", digit1);
            break;
        default:
            printf("输入错误");
    }
    printf("\n");
    printf("逆序数字：");
    switch (count) {
        case 1:
            printf("%d", digit1);
            break;
        case 2:
            printf("%d%d", digit2, digit1);
            break;
        case 3:
            printf("%d%d%d", digit3, digit2, digit1);
            break;
        case 4:
            printf("%d%d%d%d", digit4, digit3, digit2, digit1);
            break;
        case 5:
            printf("%d%d%d%d%d", digit5, digit4, digit3, digit2, digit1);
            break;
        default:
            printf("输入错误");
    }
    printf("\n");

    return 0;
}