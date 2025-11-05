#include <stdio.h>
#include <math.h>
int main() {
    int days = 30;
    double stranger_give = 30 * 100000.0; 
    double rich_give = 0.01 * (pow(2, 30) - 1); 
    printf("陌生人给百万富翁：%.2f元\n", stranger_give);
    printf("百万富翁给陌生人：%.2f元\n", rich_give);
    return 0;
}