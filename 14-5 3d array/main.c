//
//  main.c
//  14-5 3d array
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {       // 2반 각 3명의 4과목 점수 초기화
    int score[2][3][4] = {
        { {72, 80, 95, 65}, {68, 98, 83, 90}, {75, 72, 84, 90} },
        { {66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75} }
    };
    
    int i, j, k;

    for (i = 0; i < 2; i++) {
        printf("%d반의 점수...\n", i + 1);
        
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("%5d", score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
