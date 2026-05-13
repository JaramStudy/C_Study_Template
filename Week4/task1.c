#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    char names[10][20];
    char target[20];

    // n 입력
    scanf("%d", &n);
    // 명단 입력
    for(int i = 0; i < n; i++)
        scanf("%s", names[i]);
    // 찾고 싶은 학생 입력
    scanf("%s", target);
    // 배열을 탐색하여 해당 학생을 찾으면 이름 출력
    for(int i = 0; i < n; i++)
        if(!strcmp(names[i], target)) {
            printf("%s", target);
            return 0;
        }
    // 만약 없다면, Not found 출력
    printf("Not found");
    return 0;
}