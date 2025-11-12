#include<stdio.h>
int main()
{
    int a[4] = {0};  
    int i, sum = 0;  
    printf("请输入4个整数:");
    for (i=0; i<4; i++) 
        scanf("%d", &a[i]);
    for (i=0; i<4; i++) 
        sum += a[i]; 
    printf("四个整数和为:%d\n ", sum);
    return 0;
}