#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    for (int i = 2; i <= A / 2 && i <= B / 2; i++) {
        if (A % i == 0 && B % i == 0) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}