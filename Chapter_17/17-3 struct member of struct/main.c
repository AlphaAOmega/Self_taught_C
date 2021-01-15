//
//  main.c
//  17-3 struct member of struct
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct profile {
    int age;
    double height;
};

struct student {
    struct profile pf;
    int id;
    double grade;
};

int main(int argc, const char * argv[]) {
    struct student yuni;
    
    yuni.pf.age = 17;
    yuni.pf.height = 164.3;
    yuni.id = 314;
    yuni.grade = 4.3;
    
    printf("나이 : %d\n키 : %.1lf\n학번 : %d\n학점 : %.1lf\n", yuni.pf.age, yuni.pf.height, yuni.id, yuni.grade);
    
    
    return 0;
}
