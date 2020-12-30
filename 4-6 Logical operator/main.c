//
//  main.c
//  4-6 Logical operator
//
//  Created by 하동훈 on 2020/12/30.
//

#include <stdio.h>

int main(void)
{
    int a = 30;
    int res;
    
    res = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a < 10) || (a > 20);
    printf("(a < 10) || (a > 20) : %d\n", res);
    
    
    return 0;
}
