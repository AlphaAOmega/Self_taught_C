//
//  main.c
//  11-2 scanf char
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch1, ch2;
    
    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);
    
    return 0;
}
