//
//  main.c
//  10-3 array output pointer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;
    
    printf("배열의 값 : ");
    for (i = 0; i < 3; i++) {
        printf("%5d", *pa);
        pa++;
    }
    printf("\n");
}
