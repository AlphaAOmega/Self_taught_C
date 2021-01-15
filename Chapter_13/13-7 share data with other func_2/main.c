//
//  main.c
//  13-7 share data with other func_2
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

void add_ten(int *pa);

int main(int argc, const char * argv[]) {
    int a = 10;
    
    add_ten(&a);
    printf("a : %d\n", a);
    
    return 0;
}

void add_ten(int *pa) {
    *pa += 10;
}
