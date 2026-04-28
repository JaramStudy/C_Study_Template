#include <stdio.h>

int main(void) {
    int year;

    // 어려운 버전
    /*
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("Leap Year\n");
    else
        printf("Common Year\n");
    */

    // 쉬운 버전
    if(year % 400 == 0)
        printf("Leap Year\n");
    else if(year % 100 == 0)
        printf("Common Year\n");
    else if(year % 4 == 0)
        printf("Leap Year\n");
    else
        printf("Common Year\n");
    return 0;
}