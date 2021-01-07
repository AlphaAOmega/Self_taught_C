//
//  main.c
//  14-7 pointer array_2
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary1[4] = {1, 2, 3, 4};
    int ary2[4] = {11, 12, 13, 14};
    int ary3[4] = {21, 22, 23, 24};
    int *pary[3] = {ary1, ary2, ary3};
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

