//
//  main.c
//  17-5 return struct
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct vision {
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(int argc, const char * argv[]) {
    struct vision robot;
    
    printf("시력 입력 : ");
    scanf("%lf%lf", &robot.left, &robot.right);
    
    robot = exchange(robot);
    
    printf("바뀐 시력 : %.1lf, %.1lf\n", robot.left, robot.right);
    
    return 0;
}

struct vision exchange(struct vision robot) {
    double temp;
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    
    return robot;
}
