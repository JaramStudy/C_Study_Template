#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    while(1) {
        printf("두 정수와 연산자를 입력하세요: ");
        scanf("%d %c %d", &a, &op, &b);

        switch (op) {
            case '+':
                printf("%d\n", a + b);
                break;

            case '-':
                printf("%d\n", a - b);
                break;

            case '*':
                printf("%d\n", a * b);
                break;

            case '/':
                printf("%d\n", a / b);
                break;

            default:
                printf("잘못된 연산자입니다.\n");
        }
    }

    return 0;
}