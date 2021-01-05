//
//  main.c
//  11-4 buffer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
//    int i;
//
//    for(i = 0; i < 3; i++) {
//        scanf("%c", &ch);
//        printf("%c", ch);
//    }
    
    while (1) {
        scanf("%c", &ch);
        if (ch == '\n') break;
        printf("%c", ch);
    }
    
    

    return 0;
}

