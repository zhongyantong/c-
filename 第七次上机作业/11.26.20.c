#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool compare_str(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return false;
        }
        s1++;
        s2++;
    }
    return *s1 == '\0' && *s2 == '\0';
}

int main() {
    char str1[100], str2[100];
    bool (*func_ptr)(const char *, const char *) = compare_str;

    printf("请输入第一行字符串：");
    getchar();
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("请输入第二行字符串：");
    fgets(str2, 100, stdin);
    str1[strcspn(str2, "\n")] = '\0';
    if (func_ptr(str1, str2)) {
        printf("两行字符串一致\n");
    } else {
        printf("两行字符串不一致\n");
    }
    return 0;
}