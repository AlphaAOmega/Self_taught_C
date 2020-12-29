//
//  main.c
//  3-3 Variety variables
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345; //각 변수 자료형의 최대값
    
    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n", ln);
    printf("long long형 변수 출력 : %lld\n", lln);
    
    printf("long long형의 크기 : %lu바이트\n", sizeof(lln));
    
    return 0;
}
