#include <stdio.h>
int main() {
    float height = 100, total = 100;
    for(int i=2; i<=10; i++) {
        height /= 2;
        total += 2 * height;
    }
    printf("第10次落地共经过:%.2f米,第10次反弹高度:%.2f米\n", total, height/2);
    return 0;
}