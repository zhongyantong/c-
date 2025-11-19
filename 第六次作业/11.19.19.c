#include <stdio.h>

int *find_middle(int a[], int n) {
    int mid = n / 2;  
    return &a[mid];
}

int main() {
    int arr1[] = {1,2,3,4};  
    int arr2[] = {10,20,30}; 
    
    printf("arr1中间元素:%d\n", *find_middle(arr1, 4));  
    printf("arr2中间元素:%d\n", *find_middle(arr2, 3));  
    return 0;
}