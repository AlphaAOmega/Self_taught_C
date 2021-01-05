//
//  main.c
//  11-7 empty buffer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, grade;
    
    printf("학번 입력 : ");
    scanf("%d", &num);      // 학번 입력
    getchar();              // 버퍼에 남아있는 개행 문자 제거
    printf("학점 입력 : ");
    grade = getchar();      // 학점 입력
    printf("학번 : %d, 학점 : %c\n", num, grade);
    
    return 0;
}
