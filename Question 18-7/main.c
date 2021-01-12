//
//  main.c
//  Question 18-7
//
//  Created by 하동훈 on 2021/01/12.
//  단어 검출 프로그램

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void notice(FILE *fp);
int discriminant(char (*cp)[21], char *word, int cnt);

int main(int argc, const char * argv[]) {
    FILE *afp, *bfp, *cfp;
    int i, cnt;
    char cp[10][21];
    char word[21];

    afp = fopen("a.txt", "r");
    notice(afp);
    bfp = fopen("b.txt", "r");
    notice(bfp);
    cfp = fopen("c.txt", "w");
    notice(cfp);
    
    for (i = 0; i < 10; i++) {
        fscanf(afp, "%s", cp[i]);
        if (feof(afp)) break;
    }
    
    cnt = i;
    
    while (fscanf(bfp, "%s", word) != EOF) {
        if (!discriminant(cp, word, cnt)) {
            fprintf(cfp, "%s\n", word);
        }
    }
    
    return 0;
}

void notice(FILE *fp) {
    if (fp == NULL) {
        printf("@ 파일을 개방하지 못했습니다.");
        exit(1);
    }
}

int discriminant(char (*cp)[21], char *word, int cnt) {
    int i;
    for (i = 0; i < cnt; i++) {
        if (strcmp(cp[i], word) == 0) return 1;
    }
    return 0;
}
