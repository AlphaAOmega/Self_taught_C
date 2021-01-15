//
//  main.c
//  17-7 struct array
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct address {
    char name[20], tel[20];
    int age;
    char addr[80];
};

int main(int argc, const char * argv[]) {
    struct address list[5] = {
        {"홍길동", "111-1111", 23, "울릉도 독도"},
        {"이순신", "222-2222", 35, "서울 건천동"},
        {"장보고", "333-3333", 19, "완도 청해진"},
        {"유관순", "444-4444", 51, "충남 천안시"},
        {"안중근", "555-5555", 45, "황해도 해주"}
    };
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("%10s%10s%5d%20s\n", list[i].name, list[i].tel, list[i].age, list[i].addr);
    }
    
    return 0;
}
