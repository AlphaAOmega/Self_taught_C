//
//  main.c
//  12-11 function strlen
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str1[80], str2[80];
    char *resp;
    
    printf("2개의 과일 이름 입력 : ");
    scanf("%s%s", str1, str2);
    
    if (strlen(str1) > strlen(str2)) resp = str1;
    else resp = str2;
    
    printf("더 긴 이름 : %s\n", resp);
    
    return 0;
}
