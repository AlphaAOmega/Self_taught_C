//
//  main.c
//  9_multiple array parameter
//
//  Created by 하동훈 on 2021/01/20.
//

#include <stdio.h>

void add_mul_arr(int (*pa)[3]);            //2차원 배열을 받는 배열 포인터를 매개변수로 받음

int main(int argc, const char * argv[]) {
    int arr[2][3] = {1, 2, 3, 4, 5, 6};    //2차원 배열 선언
    int i, j;
    
    add_mul_arr(arr);                      //여기서 arr은 배열의 첫번째 요소 즉, arr[0]을 의미함
                                           //ex : *pa에 1차원 배열을 넣어서 pa[0]과 같이 각 요소로 사용하는 것 처럼
                                           //     2차원 배열에도 arr[0]을 배열 포인터의 요소로 받아서 각 요소 사용 가능
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
     
    return 0;
}

void add_mul_arr(int (*pa)[3]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            pa[i][j]++;
        }
    }
}
