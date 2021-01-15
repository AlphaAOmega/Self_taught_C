//
//  main.c
//  12-10 function strcat
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[80] = "straw";
    
    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n", str);
    
    return 0;
}
