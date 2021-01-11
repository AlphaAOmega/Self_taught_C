//
//  main.c
//  18-4 putchar with stdio
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ch;
    
    while (1) {
        ch = getchar();
        if (ch == EOF) break;
        
        putchar(ch);
    }
    return 0;
}
