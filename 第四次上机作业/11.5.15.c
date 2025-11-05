#include <stdio.h>
int main() {
    int day = 10, chocolate = 1;
    while (day > 1) {
        chocolate = (chocolate + 1) * 2;
        day--;
    }
    printf("小明妈妈总共买了%d块巧克力\n", chocolate);
    return 0;
}