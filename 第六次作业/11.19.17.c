#include <stdio.h>

int digit(int n, int k) {
    for (int i = 1; i < k; i++) {
        n /= 10;
    }
    return n % 10;  
}

int main() {
    printf("digit(829,1)=%d\n", digit(829, 1));  
    printf("digit(829,3)=%d\n", digit(829, 3));  
    return 0;
}