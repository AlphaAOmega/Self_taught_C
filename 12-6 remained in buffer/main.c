//
//  main.c
//  12-6 remained in buffer
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

void get_ch(char *pa);

int main(int argc, const char * argv[]) {
    int age;
    char name[20];
    char spell[20];
    
    printf("나이 입력 : ");
    scanf("%d", &age);
    
    printf("이름 입력 : ");
    fgetc(stdin);

    scanf("%s", name);
    
    getchar();

    get_ch(spell);
    
    printf("나이 : %d, 이름 : %s, 스펠 : %s\n",age, name, spell);
    
    return 0;
}

void get_ch(char *pa) {
    char ch = 0;
    
    printf("스펠 입력 : ");
    
    while (ch != '\n') {
        ch = getchar();
        *pa = ch;
        pa++;
    }
    
    *pa = '\0';
    
}
