//
//  main.c
//  12-12 function strcmp
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str1[80] = "pear";
    char str2[80] = "peach";
    
    printf("사전에 나중에 나오는 과일 이름 : ");
    
    if (strcmp(str1, str2) > 0) printf("%s\n", str1);   // 1. str1이 str2보다 나중에 나오면 1 반환
    else printf("%s\n", str2);                          // 2. str1이 str2보다 먼저 나오면 -1 반환
                                                        // 3. 같은 문자열이면 0 반환
    printf("앞의 3개의 문자만 비교하면?\n");
    if (strncmp(str1, str2, 3) == 0) printf("같다.\n");
    else printf("다르다.\n");
    
    return 0;
}
