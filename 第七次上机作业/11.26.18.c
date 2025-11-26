#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *start, *end;
    char temp;

    printf("请输入一行字符串：");
    getchar(); 
    fgets(str, 100, stdin); 
    str[strcspn(str, "\n")] = '\0';

    start = str;                 
    end = str + strlen(str) - 1;  
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++; 
        end--;   
    }

    printf("反向输出：%s\n", str);
    return 0;
}