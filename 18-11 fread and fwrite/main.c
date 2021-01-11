//
//  main.c
//  18-11 fread and fwrite
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *afp, *bfp;
    int num = 10;
    int res;
    
    afp = fopen("a.txt", "wt");
    fprintf(afp, "%d", num);
    
    bfp = fopen("b.txt", "wb");
    fwrite(&num, sizeof(num), 1, bfp);
    
    fclose(afp);
    fclose(bfp);
    
    bfp = fopen("b.txt", "rb");
    fread(&res, sizeof(num), 1, bfp);
    printf("%d\n", res);
    
    fclose(bfp);
    
    return 0;
}
