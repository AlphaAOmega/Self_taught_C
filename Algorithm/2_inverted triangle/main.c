//
//  main.c
//  2_inverted triangle
//
//  Created by 하동훈 on 2021/01/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line, i, j, k;
    
    printf("역삼각형의 줄 수를 입력하세요 : ");
    scanf("%d", &line);
    
    for (i = line; i > 0; i--) {
        for (k = 0; k < line - i; k++) printf(" ");
        for (j = 1; j < i * 2; j++) printf("*");
        printf("\n");
    }
    return 0;
}
