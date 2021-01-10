//
//  main.c
//  17-12 typedef
//
//  Created by 하동훈 on 2021/01/10.
//

#include <stdio.h>

struct student {
    int num;
    double grade;
};

//typedef struct {
//    int num;
//    double grade;
//} Student;                선언과 동시에 typedef 사용도 가능

typedef struct student Student;

void print_data(Student *ps);

int main(int argc, const char * argv[]) {
    Student s1 = {315, 4.2};
    
    print_data(&s1);
    
    return 0;
}

void print_data(Student *ps) {
    printf("학번 : %d\n", ps -> num);
    printf("학점 : %.1lf\n", ps -> grade);
}
