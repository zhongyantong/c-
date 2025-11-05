#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void goldbach(int even) {
    for (int i = 2; i <= even / 2; i++) {
        if (isPrime(i) && isPrime(even - i)) {
            printf("%d = %d + %d\n", even, i, even - i);
            break;
        }
    }
}
int main() {
    int even;
    printf("请输入一个充分大的偶数：");
    scanf("%d", &even);
    if (even % 2 != 0) {
        printf("请输入偶数\n");
        return 1;
    }
    goldbach(even);
    return 0;
}