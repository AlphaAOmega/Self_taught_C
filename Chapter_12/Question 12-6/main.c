//
//  main.c
//  Question 12-6
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char ch1[16];
    char ch2[16];
    
    printf("단어 입력 : ");
    scanf("%s", ch1);
    
    strcpy(ch2, ch1);
    
    if (strlen(ch2) > 5) {
        int i;
        for (i = 5; ch2[i] != '\0'; i++) {
            ch2[i] = '*';
        }
    }
    
    printf("입력한 단어 : %s, 생략한 단어 : %s\n", ch1, ch2);
    
    return 0;
}
