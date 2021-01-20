//
//  main.c
//  6_prime number
//
//  Created by 하동훈 on 2021/01/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, ok = 0, index = 2, guess = 5;
    int pr[1000];
    pr[0] = 2;
    pr[1] = 3;
    
    for (;;) {
        for (i = 0; i < index; i++) {
            if (guess % pr[i] == 0) {
                ok = 0;
                break;
        }
            else ok++;
    }
        if (ok > 0) {
            pr[index] = guess;
            printf("소수 : %d\n", guess);
            index++;
            if (index == 1000) break;
        }
        guess += 2;
    }
    
    return 0;
}
