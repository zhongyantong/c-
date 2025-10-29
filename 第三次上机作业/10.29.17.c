#include <stdio.h>

int main() {
    int num, hundreds, tens, units;
    printf("请输入一个三位正整数：");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("输入不是三位正整数！\n");
    } else {
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;

        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == num) {
            printf("%d 是水仙花数\n", num);
        } else {
            printf("%d 不是水仙花数\n", num);
        }
    }

    return 0;
}