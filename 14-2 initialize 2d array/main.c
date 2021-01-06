//
//  main.c
//  14-2 initialize 2d array
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
        };
        
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) printf("%5d", num[i][j]);
        
        printf("\n");
    }
        
    return 0;
}
