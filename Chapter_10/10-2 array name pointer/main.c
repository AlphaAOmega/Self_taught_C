//
//  main.c
//  10-2 array name pointer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[3];
    int *pa = ary;
    int i;
    
    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];
    
    for (i = 0; i < 3; i++)
    printf("%5d", pa[i]);
    
    printf("\n");
    
    return 0;
}
