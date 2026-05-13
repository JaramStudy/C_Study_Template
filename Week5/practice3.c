#include <stdio.h>
#include <stdlib.h>

// 문자열의 크기
#define str_size 21

int main() {
    /*
     이런 데이터들을 묶어서 표현할 수 없을까?
     다음 수업인 구조체 편에서 배워보기!
    */
    char **student_name; // 학생 이름
    int *student_number; // 학번
    char **department; // 학과
    int n; // 학생 수

    // 학생 수를 입력받는다

    // 입력받은 학생 수만큼 배열을 동적할당 해보자!
    // 이중 포인터는 동적 할당을 두 번 해야 한다.
    // 학생의 이름은 최대 20자까지만 받는다.

    // 각 정보를 순서대로 입력받아보자

    // 입력받은 정보를 순서대로 출력해보자
    // printf("%s %d %s", 이름, 학번, 학과);

    // 사용이 끝난 동적 배열을 해제한다.

    return 0;
}