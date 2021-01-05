//
//  main.c
//  Question 11-7
//
//  Created by 하동훈 on 2021/01/05.
//  길이가 가장 긴 단어 찾기

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch = 0;
    int res, cnt = 0, temp = 0, i = 0;
    
    while (i != 1) {
        while (ch != '\n') {
            res = scanf("%c", &ch);
            if (res == EOF) {
                i = 1;
                break;
            }
            temp++;
        }
        if (cnt < temp) cnt = temp;
        ch = 0;
        temp = 0;
    }
    
    printf("제일 긴 단어의 길이 : %d\n", cnt - 1);
    
    return 0;
}
