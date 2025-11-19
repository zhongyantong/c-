#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countDuplicates(char str[]) {
    int count[128] = {0};  
    int len = strlen(str);

    
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("重复的字符及次数：\n");
    for (int i = 0; i < 128; i++) {
        if (count[i] > 1) {
            printf("'%c':%d次\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    printf("请输入字符串：");
    scanf("%s", str);
    countDuplicates(str);
    return 0;
}