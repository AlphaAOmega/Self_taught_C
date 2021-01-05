//
//  main.c
//  10-6 array function_2
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void print_ary(int *pa, int size);

int main(int argc, const char * argv[]) {
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};
    
    print_ary(ary1, 5);
    printf("\n");
    print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));
    printf("\n");
    
    return 0;
}

void print_ary(int *pa, int size) {
    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", pa[i]);
    }
    
}
