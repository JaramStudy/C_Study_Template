#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n < 100) {
        n *= 2;
        printf("%d\n", n);
    }
}