//
//  main.c
//  18-2 file output
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    int ch;
    
    fp = fopen("a.txt", "r");
    if (fp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    
    while (1) {
        ch = fgetc(fp);
        if (ch == EOF) break;
        putchar(ch);
    }
    
    fclose(fp);
    
    return 0;
}
