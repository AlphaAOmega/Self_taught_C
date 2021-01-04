//
//  main.c
//  Question 5-7
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int a, b, res;
    char opr;
    
    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &a, &opr, &b);
    
    switch (opr) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/': res = a / b; break;
    }
    
    
//    if (opr == '+')
//        res = a + b;
//    else if (opr == '-')
//        res = a - b;
//    else if (opr == '*')
//        res = a * b;
//    else
//        res = a / b;
    
    printf("%d%c%d = %d\n", a, opr, b, res);
    return 0;
}
