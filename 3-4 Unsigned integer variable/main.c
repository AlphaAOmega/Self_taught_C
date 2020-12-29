//
//  main.c
//  3-4 Unsigned integer variable
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned int a;
    
    a = 4294967295;     //큰 양수 저장
    printf("%d\n", a);  //%d(부호 있는 정수형으로 출력, 맨 앞자리가 1임으로 -표시)
    a = -1;             //음수 저장
    printf("%u\n", a);  //%u(부호 없는 정수형으로 출력, -1의 2진수가 양수로 인식됨)
    return 0;
}
