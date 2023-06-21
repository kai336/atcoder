#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool check(int n, int *binary){
    int i, score;
    score = 0;

    for(i=n-1; i>=0; i--){
        switch(binary[i]){
            case 0:
                score++;
                printf("%d score++\n", i);
                break;
            case 1:
                score--;
                printf("%d score--\n", i);
                break;
        }
        if(score < 0) return false;
    }

    if(score = 0) return true;
}

void braketprint(int n, int *binary){
    int i;
    for(i=0; i<n; i++){
        switch(binary[i]){
            case 0:
                putchar('(');
                break;
            case 1:
                putchar(')');
                break;
        }
    }
    printf("\n");
}

int main(void){
    int n;
    scanf("%d", &n);

    if(n % 2 != 0) return 0;

    char brakets[n];

    //making binary array
    int num = pow(2, n);
    int binary[num][n];
    int i, j, decimal;
    for(i=0; i<num; i++){
        decimal = i;
        for(j=0; j<n; j++){
            binary[i][j] = decimal % 2;
            decimal = decimal / 2;
            printf("binary%d %d\n", i, binary[i][j]);
        }
    }

    //check
    for(i=0; i<num; i++){
        printf("i %d\n", i);
        if(check(n, binary[i])) braketprint(n, binary[i]);
    }

    return 0;
}