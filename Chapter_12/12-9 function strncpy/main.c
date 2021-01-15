//
//  main.c
//  12-9 function strncpy
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[20] = "mango tree";
    char str2[20] = "apple tree";
    
    strncpy(str, str2, 5);
    
    printf("%s\n", str);
    
    return 0;
}
