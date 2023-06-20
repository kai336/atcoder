#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100000

int main(void){
    char token[4][10]= { "dream", "dreamer", "erase", "eraser" };
    //char alphabet[6][2] = {"a", "d", "e", "m", "r", "s"};
    char string[MAX_SIZE];
    scanf("%s", string);
    //("%s\n", string);
    char buff[10];

    int len = strlen(string);
    int mark = len - 1;

    if(len < 5){
        printf("NO\n");
        return 0;
    }

    int i, flag;
    flag = 0;

    while(flag == 0){
        switch(string[mark]){
            case 'm':
                for(i=0; i<5; i++){
                    buff[i] = string[mark - 4 + i];
                }
                //printf("%s\n", buff);
                if(strncmp(buff, token[0], 5)==0){
                    mark = mark - 5;

                    /*for(i=0; i<5; i++){
                        buff[i] = NULL;
                    }*/

                }else flag = 1;
                
                break;

            case 'r':
                switch(string[mark - 2]){
                    case 'm':
                        for(i=0; i<7; i++){
                            buff[i] = string[mark - 6 + i];
                        }
                        //printf("%s\n", buff);
                        if(strncmp(buff, token[1], 6)==0){
                            mark = mark - 6;

                            /*for(i=0; i<7; i++){
                                buff[i] = NULL;
                            }*/

                        }else flag = 1;

                        break;

                    case 's':
                        for(i=0; i<6; i++){
                            buff[i] = string[mark - 5 + i];
                        }
                        //printf("%s\n", buff);
                        if(strncmp(buff, token[3], 6)==0){
                            mark = mark - 6;

                            /*for(i=0; i<6; i++){
                                buff[i] = NULL;
                            }*/

                        }else flag = 1;

                        break;
                    default:
                        flag = 1;
                }

                break;
                
            case 'e':
                for(i=0; i<5; i++){
                    buff[i] = string[mark - 4 + i];
                }
                //printf("%s\n", buff);
                if(strncmp(buff, token[2], 5)==0){
                    mark = mark - 5;
                }else flag = 1;

                break;

            default:
                printf("NO\n");
        }

        if(flag == 1 || (mark < 4 && mark > -1)){
            //printf("%d\n", mark);
            printf("NO\n");
            break;
        }

        if(flag == 0 && mark == -1){
            printf("YES\n");
            break;
        }
    }



    return 0;
}