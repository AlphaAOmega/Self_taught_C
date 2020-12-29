//
//  main.c
//  3-11 Scanf funtion_3
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    char grade;
    char name[20];
    
    printf("학점 입력 : ");
    scanf("%c", &grade);
    printf("이름 입력 : ");
    scanf("%s", name);
    printf("%s의 학점은 '%c'입니다.\n", name, grade);
    return 0;
}
