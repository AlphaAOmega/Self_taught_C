//
//  main.c
//  12-3 str array with scanf
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[80];
    
    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("첫 번째 단어 : %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아있는 두 번째 단어 : %s\n", str);
    return 0;
}
