//
//  main.c
//  17-10 union
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

union student {
    int num;
    double grade;
};

int main(int argc, const char * argv[]) {
    union student s1 = {315};
    
    printf("학번 : %d\n", s1.num);
    s1.grade= 4.4;
    printf("학점 : %.1lf\n", s1.grade);
    printf("학번 : %d\n", s1.num);

    return 0;
}
