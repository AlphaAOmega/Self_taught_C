//
//  main.c
//  13-5 register variable
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    register int i;
    auto int sum = 0;
    
    for (i = 1; i <= 10000; i++) sum += i;
    
    printf("%d\n", sum);
    
    return 0;
}
