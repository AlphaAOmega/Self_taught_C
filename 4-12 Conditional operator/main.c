//
//  main.c
//  4-12 Conditional operator
//
//  Created by 하동훈 on 2021/01/02.
//

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;
    
    res = (a > b) ? a : b;
    printf("큰 값 : %d\n", res);
    return 0;
}
