//
//  main.c
//  9-1 memory address
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(void) {
    int a;
    double b;
    char c;
    printf("int형 변수의 주소 : %p\n", &a);
    printf("double형 변수의 주소 : %p\n", &b);
    printf("char형 변수의 주소 : %p\n", &c);

    return 0;
}
