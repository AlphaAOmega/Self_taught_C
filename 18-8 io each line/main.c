//
//  main.c
//  18-8 io each line
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE *ifp, *ofp;
    char str[80];
    char *res;
    
    ifp = fopen("a.txt", "r");
    if (ifp == NULL) {
        printf("입력 파일을 열지 못했습니다.");
        return 1;
    }
    
    ofp = fopen("b.txt", "w");
    if (ofp == NULL) {
        printf("출력 파일을 열지 못했습니다.");
        return 1;
    }
    
    while (1) {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL) break;
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs(" ", ofp);
    }
    
    fclose(ifp);
    fclose(ofp);
    
    return 0;
}
