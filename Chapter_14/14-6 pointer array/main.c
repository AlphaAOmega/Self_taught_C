//
//  main.c
//  14-6 pointer array
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *pary[5] = {"dog", "elephant", "horse", "tiger", "cat"};
    int i;
    
    for (i = 0; i < 5; i++) printf("%s\n", pary[i]);
    
    return 0;
}
