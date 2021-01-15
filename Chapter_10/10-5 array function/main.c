//
//  main.c
//  10-5 array function
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void print_ary(int *pa);

int main(int argc, const char * argv[]) {
    int ary[5] = {10, 20, 30, 40, 50};
    
    print_ary(ary);
    
    return 0;
}

void print_ary(int *pa) {
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("%d ", pa[i]);
    }
    
}
