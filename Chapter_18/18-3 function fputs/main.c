//
//  main.c
//  18-3 function fputs
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    char str[] = "banana";
    int i;
    
    fp = fopen("b.txt", "w");
    if (fp == NULL) {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }
    
    i = 0;
    while (str[i] != '\0') {
        fputc(str[i], fp);
        i++;
    }
    fputs("\n", fp);
    fclose(fp);
    
    return 0;
}
