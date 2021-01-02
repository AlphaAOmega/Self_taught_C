//
//  main.c
//  4-8 Shape conversion
//
//  Created by 하동훈 on 2021/01/02.
//

#include <stdio.h>

int main(void)
{
    int a = 20, b = 3;
    double res;
    
    res = ((double)a) / ((double)b);
    printf("a = %d, b = %d\n", a, b);
    printf("a / b의 결과 : %.1lf\n", res);
    
    a = (int)res;
    printf("(int) %.1lf의 결과 : %d\n", res, a);
    return 0;
}
