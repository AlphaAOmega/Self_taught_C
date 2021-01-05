//
//  main.c
//  Question 8-7
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80];
    int i, count = 0;
    
    printf("문장 입력 : ");
    scanf("%s", str);

    for (i = 0; i < 80; i++) {
        if (str[i] == 0) break;
        else if ((str[i] >= 65) && (str[i] <= 90)) {
            str[i] += 32;
            count += 1;
        }
    }
    
    printf("바뀐 문장 : %s\n바뀐 문자 수 : %d\n", str, count);
    
    return 0;
}
