//
//  main.c
//  14-4 initialize char 2d array
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char animal[5][10] = {
        {'d', 'o', 'g', '\0'},
        {'t', 'i', 'g', 'e', 'r', '\0'},
        {'r', 'a', 'b', 'b', 'i', 't', '\0'},
        {'h', 'o', 'r', 's', 'e', '\0'},
        {'c', 'a', 't', '\0'},
    };
    // 문자 상수로 하나씩 초기화
    
    char animal2[][10] = {"dog", "tiger", "rabbit", "horse", "cat"};
    // 문자열 상수로 한 열씩 초기화
    
    int i;
    
    for (i = 0; i < 5; i++) printf("%s ", animal[i]);
    printf("\n");
    
    for (i = 0; i < 5; i++) printf("%s ", animal2[i]);
    printf("\n");
    
    return 0;
}
