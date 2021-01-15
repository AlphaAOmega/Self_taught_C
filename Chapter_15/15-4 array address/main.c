//
//  main.c
//  15-4 array address
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[5];
    
    printf(" ary의 값 : %u\t", ary);
    printf("ary의 주소 : %u\n", &ary);
    printf(" ary + 1 : %u\t", ary + 1);
    printf("&ary + 1 : %u\n", &ary + 1);
    
    return 0;
}
