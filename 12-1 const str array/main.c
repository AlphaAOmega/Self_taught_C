//
//  main.c
//  12-1 const str array
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("apple이 저장된 시작 주소의 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫 번째 문자 : %c\n", *"apple");
    printf("두 번째 문지 : %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);
    return 0;
}
