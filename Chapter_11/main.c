//
//  main.c
//  11-3 getchar putchar
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ch;
    
    ch = getchar();
    printf("입력한 문자 : ");
    
    putchar(ch);
    putchar('\n');
    
    return 0;
}
 
