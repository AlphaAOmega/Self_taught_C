//
//  main.c
//  4-1 Arithmetic operator
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    int a, b;
    int sum, sub, mul, inv;
    
    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;
    
    printf("a의 값 : %d, b의 값 : %d\n", a, b);
    printf("ab의 덧셈 : %d, 뺄셈 : %d, 곱셈 : %d\n", sum, sub, mul);
    printf("a의 음수 연산 : %d\n", inv);
    
    return 0;
    
}
