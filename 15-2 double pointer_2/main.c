//
//  main.c
//  15-2 double pointer_2
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(int argc, const char * argv[]) {
    char *pa = "success", *pb = "failure";
    
    printf("pa : %s, pb : %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa : %s, pb : %s\n", pa, pb);
    
    return 0;
}

void swap_ptr(char **ppa, char **ppb) {
    char *pt;
    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}
