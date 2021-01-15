//
//  main.c
//  17-1 struct
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct student {
    int num;
    double grade;
};

int main(int argc, const char * argv[]) {
    struct student s1;
    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);
    return 0;
}
