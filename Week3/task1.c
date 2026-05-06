#include <stdio.h>
#include <stdlib.h>

// 함수 선언
double getAverage(int[], int);
int getMax(int[], int);
int getMin(int[], int);
char getGrade(int);

int main() {    // 메인함수는 수정하지 말고, 아래의 TODO 부분을 구현
    // input
    int n, *score;
    scanf("%d", &n);
    // 동적할당, 나중에 배워요
    score = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", &score[i]);
    
    // output
    printf("Average: %.2lf\n", getAverage(score, n));
    printf("Max: %d\n", getMax(score, n));
    printf("Min: %d\n", getMin(score, n));
    printf("Grades: ");
    for(int i = 0; i < n; i++)
        printf("%c ", getGrade(score[i]));
    
    free(score);
}

// TODO: 위에 선언된 각각의 함수 구현하기
double getAverage(int score[], int num) {
    double sum = 0;
    for (int i = 0; i < num; i++)
        sum += score[i];
    return sum / num ;
}

int getMax(int score[], int num) {
    int max = 0;
    for (int i = 0; i<num; i++)
        if (score[i] > max)
            max = score[i];

    return max;
}

int getMin(int score[], int num) {
    int min = 100;
    for (int i = 0; i<num; i++)
        if (score[i] < min)
            min = score[i];
    
    return min;
}

char getGrade(i_score) {
    if (i_score >= 90)
        return 'A';
    else if (i_score >= 80)
        return 'B';
    else if (i_score >= 70)
        return 'C';
    else if (i_score >= 60)
        return 'D';
    else
        return 'F';
}