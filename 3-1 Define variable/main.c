//
//  main.c
//  3-1 Define variable
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    int b, c;
    double da;
    char ch;
    
    a = 10;  // l-value = a, r-value = 10
    b = a;
    c = a + 20;
    da = 3.5;
    ch = 'A';
    
    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값 : %c\n", ch);

    return 0;
}
