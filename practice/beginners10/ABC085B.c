#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void){
    int n, i;

    scanf("%d\n", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", a+i);
    }

    //for(i=0; i<n; i++) printf("%d\n", a[i]);

    int flag[MAX];
    for(i=0; i<MAX; i++){
        flag[i] = 0;
    }

    int tmp;
    for(i=0; i<n; i++){
        tmp = a[i]-1;
        flag[tmp] = 1;
    }

    int sum = 0;
    for(i=0; i<MAX; i++){
        if(flag[i]==1) sum++;
    }

    printf("%d\n", sum);
    
    return sum;
}