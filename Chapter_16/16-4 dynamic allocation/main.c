//
//  main.c
//  16-4 dynamic allocation
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char temp[80];
    char *str[3];
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("문자열을 입력하세요 : ");
        scanf("%s", temp);
        str[i] = (char *)malloc(strlen(temp) + 1);  // 저장공간 할당
        strcpy(str[i], temp);                       // 문자열 복사
    }
    for (i = 0; i < 3; i++) {
        printf("%s\n", str[i]);
        free(str[i]);
    }
    
    return 0;
}
