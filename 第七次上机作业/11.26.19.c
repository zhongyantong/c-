#include <stdio.h>
#include <string.h>

void replace_foo(char *str) {
    char *p = str; 
    char *q = str; 
    while (*p != '\0' && *(p+1) != '\0' && *(p+2) != '\0') {
        if (*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o') {
            *q++ = 'x';
            *q++ = 'x';
            *q++ = 'x';
            p += 3; 
        } else {
            *q++ = *p++;
        }
    }
    while (*p != '\0') {
        *q++ = *p++;
    }
    *q = '\0';
}

int main() {
    char str[100];
    printf("请输入字符串：");
    getchar();
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    replace_foo(str);
    printf("替换后：%s\n", str);
    return 0;
}