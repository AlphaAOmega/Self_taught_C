//
//  main.c
//  18-6 filetype and open mode
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    int ary[10] = {13, 10, 13, 13, 10, 26, 13, 10, 13, 10};
    int i, res;
    
    fp = fopen("a.txt", "wb");
    for (i = 0; i < 10; i++) fputc(ary[i], fp);
    fclose(fp);
    
    fp = fopen("a.txt", "rt");
    while (1) {
        res = (int)fgetc(fp);
        if (res == EOF) break;
        printf("%4d", res);
    }
    fclose(fp);

    return 0;
}
