//
//  main.c
//  18-1 fopen and fclose
//
//  Created by 하동훈 on 2021/01/10.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    
    fp = fopen("a.txt", "r");
    if (fp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    printf("파일이 열렸습니다.");
    fclose(fp);
    
    return 0;
}
