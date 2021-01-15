//
//  main.c
//  15-5 2d array and array pointer
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

void print_ary(int (*pa)[4]);

int main(int argc, const char * argv[]) {
    int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7 ,8}, {9, 10, 11, 12} };
//    int (*pa)[4];
//    int i, j;
//    pa = ary;
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%5d", pa[i][j]);  // pa를 2차원 배열처럼 사용 - *(pa + i)[j]
//        }
//        printf("\n");
//    }
    
    print_ary(ary);
    
    return 0;
}

void print_ary(int (*pa)[4]) {          // 배열 포인터는 배열을 매개변수로 받아 함수를 처리하는 경우에 사용된다.(15-6)
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
    
}
