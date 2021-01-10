//
//  main.c
//  Question 17-7
//
//  Created by 하동훈 on 2021/01/10.
//  성적 처리 프로그램

#include <stdio.h>

typedef struct {
    int num;
    char name[30];
    int kor, eng, mat, total;
    double avg;
    char grade;
} Student;


int main(int argc, const char * argv[]) {
    Student students[5], temp;
    Student *ps;
    int i, j;
    
    ps = students;
    
    for (i = 0; i < 5; i++) {
        printf("학번 : ");
        scanf("%d", &students[i].num);
        printf("이름 : ");
        scanf("%s", students[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &students[i].kor, &students[i].eng ,&students[i].mat);
        students[i].total = students[i].kor + students[i].eng + students[i].mat;
        students[i].avg = students[i].total / 3.0;
        
        if (students[i].avg >= 90) students[i].grade = 'A';
        else if (students[i].avg >= 80) students[i].grade = 'B';
        else if (students[i].avg >= 70) students[i].grade = 'C';
        else students[i].grade = 'F';
    }
    
    printf(" # 정렬 전 데이터...\n");
    for (i = 0; i < 5; i++) {
        printf("%5d%20s%3d%5d%5d%5d%7.1lf%3c\n", students[i].num, students[i].name, students[i].kor,
               students[i].eng, students[i].mat, students[i].total, students[i].avg, students[i].grade);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (students[i].avg < students[j].avg) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    
    printf(" # 정렬 후 데이터...\n");
    for (i = 0; i < 5; i++) {
        printf("%5d%20s%3d%5d%5d%5d%7.1lf%3c\n", students[i].num, students[i].name, students[i].kor,
               students[i].eng, students[i].mat, students[i].total, students[i].avg, students[i].grade);
    }
        
    return 0;
}
