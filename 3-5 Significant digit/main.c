//
//  main.c
//  3-5 Significant digit
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void) {

    float ft = 1.234567890123456789;   //float형은 유효숫자(소수점아래) 7자리 까지 사용하는 것이 좋다.
    double db = 1.234567890123456789;  //double형은 유효숫자(소수점아래) 15자리 까지 사용하는 것이 좋다.
    
    printf("float형 변수의 값 : %.20f\n", ft);
    printf("double형 변수의 값 : %.20lf\n", db);
    
    return 0;
}
