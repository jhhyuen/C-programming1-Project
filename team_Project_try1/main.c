//
//  main.c
//  team_Project_try1
//
//  Created by 문정현 on 11/14/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 강의 정보를 저장할 구조체 정의
typedef struct {
    char name[100];
    char attendance[50];
    char teachingMethod[50];
    char examMethod[50];
    int hasAssignment;
    int hasTeamProject;
} Course;

// 함수 프로토타입 선언
void loadCourses(Course *courses, int *courseCount);
void recommendCourses(const char *mbti, Course *courses, int courseCount);

int main() {
    char mbti[5];
    Course courses[100];
    int courseCount = 0;

    // 사용자로부터 MBTI 유형 입력 받기
    printf("MBTI 유형을 입력하세요 (예: INFP): ");
    scanf("%4s", mbti);

    // 강의 데이터 로드
    loadCourses(courses, &courseCount);

    // 강의 추천
    recommendCourses(mbti, courses, courseCount);

    return 0;
}
