#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool check(int x, int n, int k, int *a){
    int count, last, i;
    count = 0;
    last = 0;
    for(i=1; i<n+2; i++){
        if(a[i] - last >= x){
            last = a[i];
            count++;
        }
    }
    if(count < k + 1){
        return false;
    }else return true;
}

int main(void){
    int n, l, k;

    scanf("%d%d", &n, &l);
    scanf("%d", &k);

    int a[n+2];
    a[0] = 0;
    a[n+1] = l;

    char buff[1000000];

    char gomi = getchar();

    fgets(buff, sizeof(buff), stdin);

    int i, j;
    char *token;
    token = strtok(buff, " \n");
    for(i=1; i<n+1; i++){
        a[i] = atoi(token);
        token = strtok(NULL, " \n");
    }

    int left, mid, right;
    left = -1;
    right = a[n+1] + 1;
    
    //binary search
    bool c;
    while(left + 1 < right){
        mid = (left + right) / 2;
        c = check(mid, n, k, a);
        if(c) left = mid;
        else right = mid;
    }

    printf("%d\n", left);

    return 0;
}