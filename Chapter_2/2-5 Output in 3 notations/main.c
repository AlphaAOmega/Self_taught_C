//
//  main.c
//  2-5 Output in 3 notations
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    printf("%d\n", 12);   //10진수
    printf("%d\n", 014);  //8진수
    printf("%d\n", 0xc);  //16진수
    
    printf("%o\n", 12);   //8진수로 출력
    printf("%x\n", 12);   //16진수를 소문자로 출력
    printf("%X\n", 12);   //16진수를 대문자로 출력
    
    return 0;
}
