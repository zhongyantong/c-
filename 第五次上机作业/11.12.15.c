#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "apple";
    int len = strlen(a);
    for(int i=0; i<len/2; i++) {
        char temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
    printf("%s\n", a);  
    return 0;
}