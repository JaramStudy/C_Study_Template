#include <stdio.h>

int main(void) {
    int A, B, C;
    int sum = 0;

    scanf("%d %d %d", &A, &B, &C);
    for(int i = A; i <= B; i++)
        if(i % C == 0)
            sum += i;

    printf("%d", sum);
    return 0;
}