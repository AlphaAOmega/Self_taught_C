//
//  main.c
//  12-8 function strcpy
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana";
    char *ps2 = str2;
    
    printf("최초 문자열 : %s\n", str1);
    strcpy(str1, str2);
    printf("바뀐 문자열 : %s\n", str1);
    
    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps2);
    printf("바뀐 문자열 : %s\n", str1);
    
    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1);
    
    return 0;
}
