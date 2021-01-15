//
//  main.c
//  15-3 double pointer_3
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

void print_str(char **ppa, int cnt);

int main(int argc, const char * argv[]) {
    char *pary[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;
    
    count = sizeof(pary) / sizeof(pary[0]);
    print_str(pary, count);
    
    return 0;
}

void print_str(char **ppa, int cnt) {
    int i;
    
    for (i = 0; i < cnt; i++) {
        printf("%s\n", ppa[i]);
    }
}

