#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

int check(int *array){
    int t, x, y;
    t = array[0];
    x = abs(array[1]);
    y = abs(array[2]);
    int tmp = t - x - y;
    if((x + y < t || x + y == t)&& tmp % 2 == 0){
        return 1; /*yes*/
    }else return 0; /*no*/
}

int main(void){
    int i, j, n, flag;
    flag = 0;

    scanf("%d", &n);
    int array2d[n][3], buff[n + 1][3];

    buff[0][0] = 0;
    buff[0][1] = 0;
    buff[0][2] = 0;

    for(i=0; i<n; i++){
        scanf("%d %d %d", buff[i + 1], buff[i + 1]+1, buff[i + 1]+2);
        //printf("%d %d %d\n", buff[i][0], buff[i][1], buff[i][2]);
        for(j=0; j<3; j++){
            array2d[i][j] = buff[i + 1][j] - buff[i][j];
            //printf("%d\n", array2d[i][j]);
        }
        
        if(check(array2d[i]) == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Yes\n");
        }else printf("No\n");

    return 0;
}