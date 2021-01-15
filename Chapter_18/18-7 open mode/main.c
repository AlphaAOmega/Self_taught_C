//
//  main.c
//  18-7 open mode
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    char str[20];
    
    fp = fopen("a.txt", "a+");
    if (fp == NULL) {
        printf("파일이 실행되지 않았습니다.");
        return 1;
    }
    
    while (1) {
        printf("과일 이름 : ");
        scanf("%s", str);
        if (strcmp(str, "end") == 0) break;
        else if (strcmp(str, "list") == 0) {
            fseek(fp, 0, SEEK_SET);
            while (1) {
                fgets(str, sizeof(str), fp);
                if (feof(fp)) break;
                printf("%s", str);
            }
        }
        else fprintf(fp, "%s\n", str);
    }
    fclose(fp);
    
    return 0;
}
