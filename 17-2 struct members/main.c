//
//  main.c
//  17-2 struct members
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(int argc, const char * argv[]) {
    struct profile yuni;
    strcpy(yuni.name, "서하윤");
    yuni.age = 17;
    yuni.height = 164.5;
    
    yuni.intro = (char *)malloc(80);
    printf("자기소개 : ");
    fgets(yuni.intro, 80, stdin);
    
    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s", yuni.intro);
    
    return 0;
}
