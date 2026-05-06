#include <stdio.h>

// star 함수 선언
int star(int);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", star(n));
    return 0;
}

// TODO: star 함수 구현하기
int star(int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
            cnt++;
        }
        printf("\n");
    }
    return cnt;
}