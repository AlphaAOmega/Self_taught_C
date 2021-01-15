//
//  main.c
//  7-2 function without parameter
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int get_num(void);

int main(void) {
    int result;
    
    result = get_num();
    printf("반환값 : %d\n", result);
    
    return 0;
}

int get_num() {
    int num;
    
    printf("양수 입력 : ");
    scanf("%d", &num);
    while (num < 0) {
        printf("Error : 양수를 입력하시오\n");
        printf("양수 입력 : ");
        scanf("%d", &num);
    }
    return num;
}
