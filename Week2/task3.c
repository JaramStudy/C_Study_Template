#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    return 0;
}