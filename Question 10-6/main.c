//
//  main.c
//  Question 10-6
//
//  Created by 하동훈 on 2021/01/05.
//  로또 번호 생성 프로그램

#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(int argc, const char * argv[]) {
    int lotto_nums[6];
    
    input_nums(lotto_nums);
    print_nums(lotto_nums);
    
    return 0;
}


void input_nums(int *lotto_nums) {
    int i, j;
    for (i = 0; i < 6; i++) {
        printf("번호 입력 : ");
        scanf("%d", lotto_nums + i);
        
        for (j = 0; j < i; j++) {
            if (lotto_nums[j] == lotto_nums[i]) {
                printf("같은 번호가 있습니다.\n");
                i--;
                break;
            }
            else if (lotto_nums[i] > 45 || lotto_nums[i] < 1) {
                printf("범위 내에서 입력바랍니다.\n");
                i--;
                break;
            }
        }
    }
}


void print_nums(int *lotto_nums) {
    int i, j, temp;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (i == j) continue;
            else if (lotto_nums[i] < lotto_nums[j]) {
                temp = lotto_nums[i];
                lotto_nums[i] = lotto_nums[j];
                lotto_nums[j] = temp;
            }
        }
    }
    printf("로또 번호 : ");
    for (i = 0; i < 6; i++) printf("%d ", lotto_nums[i]);
}
