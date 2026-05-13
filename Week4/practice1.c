#include <stdio.h>
#define MAX 31

int main() {
    int n;
    scanf("%d", &n);
    // 배열 선언
    int fib[MAX];
    // fib[0], fib[1] 초기화
    fib[0] = 0; fib[1] = 1;
    // 반복문을 이용한 피보나치 수 계산
    for(int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    // 최종 결과 출력
    printf("%d", fib[n]);
    return 0;
}