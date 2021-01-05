//
//  main.c
//  11-6 getchar
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void my_gets(char *str, int size);

int main(int argc, const char * argv[]) {
    char str[7];
    
    my_gets(str, sizeof(str));
    printf("입력한 문자열 : %s\n", str);
    
    return 0;
}

void my_gets(char *str, int size) {
    int ch;
    int i = 0;
    
    ch = getchar();
    while ((ch != '\n') && (i < size -1)) {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\n';
}
