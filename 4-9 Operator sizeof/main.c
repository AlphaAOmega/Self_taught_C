//
//  main.c
//  4-9 Operator sizeof
//
//  Created by 하동훈 on 2021/01/02.
//

#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.4;
    
    printf("int형 변수의 크기 : %lu\n", sizeof(a));
    printf("double형 변수의 크기 : %lu\n", sizeof(b));
    printf("정수형 상수의 크기 : %lu\n", sizeof(10));
    printf("수식의 결괏값의 크기 : %lu\n", sizeof(1.5 + 3.4));
    printf("char 자료형의 크기 : %lu\n", sizeof(char));
 
    return 0;
}
