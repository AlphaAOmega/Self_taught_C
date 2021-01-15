//
//  main.c
//  Question 14-7
//
//  Created by 하동훈 on 2021/01/07.
// 가로 세로의 합 구하기

// 처리 시간 0.03초

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int ary[5][6] = {0};
    int i, j, n;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            if (i == 4 && j == 5) {
                for (n = 0; n < 20; n++) ary[i][j] += n;
            }
            else if (j == 5) {
                for (n = 0; n < 5; n++) ary[i][j] += ary[i][n];
            }
            else if (i == 4) {
                for (n = 0; n < 4; n++) ary[i][j] += ary[n][j];
            }
            else {
                ary[i][j] = (j + 1) + (i * 5);
            }
            printf("%10d", ary[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


// 카페에 올려진 답변 예시 처리시간 : 0.3초

//#include <stdio.h>
//
//int main(void)
//{
//     int ary[5][6] = {
//           {1, 2, 3, 4, 5},
//           {6, 7, 8, 9, 10},
//           {11, 12, 13, 14, 15},
//           {16, 17, 18, 19, 20}
//     };
//     int i, j;
//
//     for(i = 0; i < 4; i++)
//     {
//           for(j = 0; j < 5; j++)
//           {
//                ary[4][j] += ary[i][j];
//                ary[i][5] += ary[i][j];
//                ary[4][5] += ary[i][j];
//           }
//     }
//
//     for(i = 0; i < 5; i++)
//     {
//           for(j = 0; j < 6; j++)
//           {
//                printf("%5d", ary[i][j]);
//           }
//           printf("\n");
//     }
//
//     return 0;
//}
