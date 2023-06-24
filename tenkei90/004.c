#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int i, j, h, w;
    scanf("%d %d", &h, &w);
    int a[h][w], columnsum[h], rowsum[w];
    for(i=0; i<h; i++){
        for(j=0; j<w; j++) scanf("%d", a[i]+j);
    }
    
    //count sum
    for(i=0; i<h; i++){
        columnsum[i] = 0;
        for(j=0; j<w; j++){
            columnsum[i] += a[i][j];
        }
    }
    for(j=0; j<w; j++){
        rowsum[j] = 0;
        for(i=0; i<h; i++){
            rowsum[j] += a[i][j];
        }
    }

    for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            printf("%d ", columnsum[i] + rowsum[j] - a[i][j]);
        }
        printf("\n");
    }

    return 0;
}