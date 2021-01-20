//
//  main.c
//  8_sort function
//
//  Created by 하동훈 on 2021/01/20.
//

#include <stdio.h>

void des_sort(int *pa);

int main(int argc, const char * argv[]) {
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    des_sort(arr);
    printf("내림차순 : ");
    for (i = 0; i < 10; i++) printf("%3d", arr[i]);
    printf("\n");
    
    return 0;
}

void des_sort(int *pa) {
    int i, j, temp;
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (pa[i] < pa[j]) {
                temp = pa[i];
                pa[i] = pa[j];
                pa[j] = temp;
            }
        }
    }
}
