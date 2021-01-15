//
//  main.c
//  19-10 necessity of header
//
//  Created by 하동훈 on 2021/01/13.
//

#include <stdio.h>
#include "point.h"
#include "line.h"

int main(int argc, const char * argv[]) {
    Line a = {{1, 2}, {5, 6}};
    Point b;
    
    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("선의 가운데 점의 좌표 : (%d, %d)\n", b.x, b.y);
    
    return 0;
}
