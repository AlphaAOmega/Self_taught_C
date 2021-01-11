//
//  main.c
//  18-9 fscanf and fprintf
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *ifp, *ofp;
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    int res;
    
    ifp = fopen("a.txt", "r");
    if (ifp == NULL) {
        printf("입력 파일이 실행되지 않았습니다.");
        return 1;
    }
    
    ofp = fopen("b.txt", "w");
    if (ofp == NULL) {
        printf("출력 파일이 실행되지 않았습니다.");
        return 1;
    }
    
    while (1) {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if (res == EOF) break;
        total = kor + eng + math;
        avg = total / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    }
    
    fclose(ifp);
    fclose(ofp);
    
    
    return 0;
}
