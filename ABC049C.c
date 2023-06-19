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
    char buff[10];
    char buff2[10];
    
    int len = strlen(string);
    int mark = len - 1;

    if(len < 5){
        printf("NO\n");
        return 0;
    }

    int i, flag;
    flag = 0;
    switch(string[mark]){
        case 'm':
            for(i=0; i<5; i++){
                buff[i] = string[mark - 4 + i];
            }
            //printf("%s\n", buff);
            if(strncmp(buff, token[0], 5)==0){
                mark = mark - 5;
                /*if(mark < 5){
                    printf("NO\n");
                    return 0;
                }*/
            }else flag = 1;
            
            break;

        case 'r':
            for(i=0; i<7; i++){
                buff[i] = string[mark - 6 + i];
            }
            //printf("%s\n", buff);
            if(strncmp(buff, token[1], 7)==0){
                mark = mark - 7;
            }else flag = 1;

            

            break;
            
        case 'e':
            break;

        default:
            printf("NO\n");
    }

    return 0;
}