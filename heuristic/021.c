#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define MAX 30

int count = 0;
int history[100000][4];

bool swap(int balls[MAX][MAX], int i1, int j1, int i2, int j2){
    int tmp;
    tmp = balls[i1][j1];
    balls[i1][j1] = balls[i2][j2];
    balls[i2][j2] = tmp;
    history[count][0] = i1;
    history[count][1] = j2;
    history[count][2] = i2;
    history[count][3] = j2;
    if(count<100000) count++;
    //printf("%d %d %d %d\n", i1, j1, i2, j2);
    return true;
}

bool ballswap(int balls[MAX][MAX]){
    int i, j;
    bool opeflag = false;
    /*for(i=MAX-1; i>0; i--){
        if(balls[i-1][0]>balls[i][0]){
            opeflag = swap(balls, i-1, 0, i, 0);
        }
        for(j=1; j<i; j++){
            if(balls[i-1][j-1]>balls[i][j]) opeflag = swap(balls, i-1, j-1, i, j);
            if(balls[i-1][j]>balls[i][j]) opeflag = swap(balls, i-1, j, i, j);
        }
        if(balls[i-1][i-2]>balls[i][i]) opeflag =  swap(balls, i-1, i-2, i, i);
    }*/

    for(i=0; i<MAX-1; i++){
        int min = 500;
        int max = 0;
        int indexj;
        for(j=0; j<i+1; j++){
            if(min>balls[i+1][j]){
                min = balls[i+1][j];
                indexj = j;
            }
        }
        printf("min %d\n", min);
        if(indexj==0 && min<balls[i][0]){
            opeflag = swap(balls, i, 0, i+1, 0);
        }else if(min<balls[i][indexj-1] || min<balls[i][indexj]){
            if(balls[i][indexj-1]<balls[i][indexj]){
                opeflag = swap(balls, i, indexj, i+1, indexj);
            }else {
                opeflag = swap(balls, i, indexj-1, i+1, indexj);
            }
        }
    }
    return opeflag;
}

int main(void){
    int balls[MAX][MAX];
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            balls[i][j] = -1;
        }
    }
    for(i=0; i<MAX; i++){
        for(j=0; j<i+1; j++){
            scanf("%d", balls[i]+j);
        }
    }

    /*for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            printf("%d ", balls[i][j]);
        }
        printf("\n");
    }*/

    bool opeflag = true;

    while(opeflag){
        opeflag = ballswap(balls);
        if(count>99999) break;
    }

    printf("%d\n", count);
    for(i=0; i<count; i++){
        for(j=0; j<4; j++){
            printf("%d ", history[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}