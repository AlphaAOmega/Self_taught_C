//
//  main.c
//  17-8 struct array_2
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct address {
    char name[20], tel[20], addr[80];
    int age;
};

void print_list(struct address *lp);

int main(int argc, const char * argv[]) {
    struct address list[5] = {
        {"홍길동", "111-1111", "울릉도 독도", 23},
        {"이순신", "222-2222", "서울 건천동", 35},
        {"장보고", "333-3333", "완도 청해진", 19},
        {"유관순", "444-4444", "충남 천안시", 15},
        {"안중근", "555-5555", "황해도 해주", 45}
    };
    
    print_list(list);
    
    return 0;
}

void print_list(struct address *lp) {
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("%10s%5d%10s%20s\n",
               (lp + i) -> name, (lp + i) -> age, (lp + i) -> tel, (lp + i) -> addr);
    }
}
