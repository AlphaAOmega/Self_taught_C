//
//  main.c
//  16-3 functino calloc and realloc
//
//  Created by 하동훈 on 2021/01/08.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *pi;
    int size = 5;
    int count = 0;
    int num, i;
    
    pi = (int *)calloc(size, sizeof(int)); // 저장공간 5개를 4바이트 크기로 할당 + 0으로 초기화
    while (1) {
        printf("양수만 입력하세요 : ");
        scanf("%d", &num);
        if (num <= 0) break;
        if (count == size) {
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (i = 0; i < count; i++) printf("%5d", pi[i]);
    
    free(pi);
    
    return 0;
}
