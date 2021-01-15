//
//  main.c
//  12-13 build function strcpy
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

char *my_cpy(char *pa, char *pb);
char *my_cat(char *pa, char *pb);
int my_len(char *pa);
int my_cmt(char *pa, char *pb);


int main(int argc, const char * argv[]) {
    char str[80] = "strawberry";
    
    printf("바꾸기 전 문자열 : %s\n", str);
    my_cpy(str, "apple");
    printf("바꾼 후 문자열 : %s\n", str);
    printf("다른 문자열 대입 : %s\n", my_cpy(str, "mango"));
    
    printf("나무로 만듦 : %s\n", my_cat(str, " tree"));
    printf("나무로 만든 열의 문자 수는 : %d\n", my_len(str));
    
    
    return 0;
}

char *my_cpy(char *pa, char *pb) {
    char *pc = pa;
    
    while (*pb != '\0') {
        *pa = *pb;
        pa++; pb++;
    }
    *pa = '\0';
    
    return pc;
}

char *my_cat(char *pa, char *pb) {
    char *pc = pa;
    
    while (*pa != '\0') pa++;
    while (*pb != '\0') {
        *pa = *pb;
        pa++; pb++;
    }
    
    *pa = '\0'; 
    
    return pc;
}

int my_len(char *pa) {
    int cnt = 0;
    
    while (*pa != '\0') {
        pa++;
        cnt++;
    }
    
    return cnt;
}

int my_cmt(char *pa, char *pb) {
    while (*pa == *pb || (*pa != '\0')) {
        pa++; pb++;
    }
           
    if (*pa > *pb) return 1;
    else if (*pa == *pb) return 0;
    else return -1;
}
