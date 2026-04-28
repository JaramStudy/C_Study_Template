#include <stdio.h>

int main() {
    int A, B;
    char op;

    while(1) {
        scanf("%c", &op);
        if(op == '#')
            break;
        switch(op) {
            case('+'):
                scanf("%d %d", &A, &B);
                printf("%d\n", A + B);
                break;
            case('-'):
                scanf("%d %d", &A, &B);
                printf("%d\n", A - B);
                break;
            case('*'):
                scanf("%d %d", &A, &B);
                printf("%d\n", A * B);
                break;
            case('/'):
                scanf("%d %d", &A, &B);
                printf("%d\n", A / B);
                break;
            case('%'):
                scanf("%d %d", &A, &B);
                printf("%d\n", A % B);
                break;
            default:
                printf("Error\n");
                break;
        }
    }

    return 0;
}