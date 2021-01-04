//
//  main.c
//  7-1 Two function
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int sum(int x, int y); // 함수 선언

int main(void) {        // 메인 함수 시작
    int a = 10, b = 20;
    int result;
    
    result = sum(a, b);    // sum 함수 호출
    printf("result : %d\n", result);
    
    return 0;
}

int sum(int x, int y) {    // sum함수 정의 시작
    int temp;
    
    temp = x + y;
    
    return temp;
}
