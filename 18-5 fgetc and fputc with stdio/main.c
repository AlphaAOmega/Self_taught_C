//
//  main.c
//  18-5 fgetc and fputc with stdio
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ch;
    
    while (1) {
        ch = fgetc(stdin);
        if (ch == EOF) break;
        fputc(ch, stdout);
    }
    return 0;
}
