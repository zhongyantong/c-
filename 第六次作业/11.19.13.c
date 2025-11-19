#include <stdio.h>
void findNumbers() {
    printf("符合条件的两位数：");
    for (int num = 10; num <= 99; num++) {
        int tens = num / 10;   
        int units = num % 10;  
        if (num % 3 == 0 && (tens == 5 || units == 5)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    findNumbers();
    return 0;
}