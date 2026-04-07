#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("1부터 %d까지의 짝수 합: %d\n", n, sum);

    return 0;
}