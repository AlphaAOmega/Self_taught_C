//
//  main.c
//  16-5 dynamic allocation_2
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);  // 동적 할당 영역의 문자열(포인터)을 출력하는 함수

int main(int argc, const char * argv[]) {
    char temp[80];
    char *str[21] = {0};  // 문자열을 연결할 포인터, 널포인터(0)으로 초기화
    int i = 0;
    
    while (i < 20) {
        printf("문자열을 입력하세요 : ");
        scanf("%s", temp);
        if (strcmp(temp, "end") == 0) break;
        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }
    
    print_str(str);
    
    for (i = 0; str[i] != NULL; i++) free(str[i]);
    
    return 0;
}

void print_str(char **ps) {
    while (*ps != NULL) {
        printf("%s\n", *ps);
        ps++;
    }
}
