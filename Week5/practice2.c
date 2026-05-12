#include <stdio.h>

void reverse_array(int *arr, int length);

int main() {
    int n;
    // n 입력

    int arr[n];
    // 배열 입력

    // 함수 호출
    reverse_array(arr, n);
    // output
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
