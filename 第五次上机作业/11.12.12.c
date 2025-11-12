
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
void selectSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int maxIdx = i;
        for(int j=i+1; j<n; j++)
            if(arr[j] > arr[maxIdx]) maxIdx = j;
        int temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

int main() {
    int arr[] = {3,1,4,2,5};
    int n = 5;
    bubbleSort(arr, n);  
    
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}