//
//  main.c
//  11-1 small to capital
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char small = 0, cap = 'G';
    
    if ((cap >= 'A') && (cap <= 'Z')) {
        small = cap + ('a' - 'A');
    }
    printf("대문자 : %c\n", cap);
    printf("소문자 : %c\n", small);
    return 0;
}
