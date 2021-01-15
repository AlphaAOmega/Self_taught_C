//
//  main.c
//  11-5 char ascii code
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int res;
    char ch;
    
    while (1) {
        res = scanf("%c", &ch);
        if (res == EOF) break;  // 윈도우의 EOF는 Ctrl + Z, MAC의 EOF는 Ctrl + D
        printf("%d ", ch);
        
    }
    
    return 0;
}
