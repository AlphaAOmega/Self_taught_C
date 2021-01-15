//
//  main.c
//  Question 10-5
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void print_month(int *mp);

int main(int argc, const char * argv[]) {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    print_month(month);
    
    return 0;
}

void print_month(int *mp) {
    int i;
    for (i = 1; i <= 12; i++) {
        printf("%d월 %d일 / ", i, mp[i-1]);
        if (i % 5 == 0) printf("\n");
    }
}
