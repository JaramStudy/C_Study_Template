#include <stdio.h>

// power 함수 선언
int power(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}

// TODO: power 함수 정의
int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}