//
//  main.c
//  12-5 function fgets
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[80];
    char *pa;
    printf("공백이 포함된 문자열 입력 : ");
    pa = fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("입력된 문자는 %s입니다.\n", str);

    
    return 0;
}
