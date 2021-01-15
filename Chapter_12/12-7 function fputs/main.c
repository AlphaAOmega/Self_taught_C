//
//  main.c
//  12-7 function fputs
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[80] = "apple juice";
    char *ps = "banana";
    
    puts(str);
    
    fputs(ps, stdout);
    puts("milk");
    
    return 0;
}
