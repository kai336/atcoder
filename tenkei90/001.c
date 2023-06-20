#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    int i;
    char *token;
    token = strtok(buff, " \n");
    for(i=1; i<n+1; i++){
        a[i] = atoi(token);
        token = strtok(NULL, " \n");
    }

    return 0;
}