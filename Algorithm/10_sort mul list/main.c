//
//  main.c
//  10_sort mul list
//
//  Created by 하동훈 on 2021/01/20.
//

#include <stdio.h>

void input_score(int (*exam)[4]);
void sort_score(int (*exam)[4], double *avg);
void print_score(int (*exam)[4], double *avg, double tot_avg);

int main(int argc, const char * argv[]) {
    int exam[5][4];
    int i, j, sum, tot = 0;
    double avg[5];
    double tot_avg;
    
    input_score(exam);
    
    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 1; j < 4; j++) {
            sum += exam[i][j];
        }
        avg[i] = sum / 3.0;
    }
    
    sort_score(exam, avg);
    
    for (i = 0; i < 5; i++) tot += avg[i];
    
    tot_avg = tot / 5.0;
    
    print_score(exam, avg, tot_avg);
    
    return 0;
}

void input_score(int (*exam)[4]) {
    int i;
    for (i = 0; i < 5; i++) {
        exam[i][0] = i + 1;
        printf("%d번 학생의 성적을 입력해주세요(국어 영어 수학) : ", i + 1);
        scanf("%d%d%d", &exam[i][1], &exam[i][2], &exam[i][3]);
    }
    
}

void sort_score(int (*exam)[4], double *avg) {
    int i, j, k;
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (avg[i] < avg[j]) {
                for (k = 0; k < 4; k++) {
                    int temp = exam[i][k];
                    exam[i][k] = exam[j][k];
                    exam[j][k] = temp;
                }
                int tem = avg[i];
                avg[i] = avg[j];
                avg[j] = tem;
            }

        }
    }
}

void print_score(int (*exam)[4], double *avg, double tot_avg) {
    int i;
    printf("  번호  |  국어  |  수학  |  영어  |  평균  |  합격여부  |\n");
    for (i = 0; i < 5; i++) {
        printf("%4d%8d%8d%8d%8.1lf", exam[i][0], exam[i][1], exam[i][2], exam[i][3], avg[i]);
        if (avg[i] >= tot_avg) printf("     합격\n");
        else printf("    불합격\n");
    }
}
