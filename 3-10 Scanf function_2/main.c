//
//  main.c
//  3-10 Scanf function_2
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;
    double height;
    
    printf("나이와 키를 입력하세요 : ");
    scanf("%d%lf", &age, &height);
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);
    system("read -n 1 -s -p \"Press any key to continue...\"");
    
    return 0;
}
