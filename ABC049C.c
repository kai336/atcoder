#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100000

int main(void){
    char token[4][10]= { "dream", "dreamer", "erase", "eraser" };
    char alphabet[6][2] = {"a", "d", "e", "m", "r", "s"};
    char string[MAX_SIZE];
    scanf("%s", string);
    //("%s\n", string);
    char buff[20];
    
    int tmp = strlen(string);

    printf("%d\n", tmp);

    return 0;
}