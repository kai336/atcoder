#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void *bucketsort(int *);

int main(void){
    int n;
    int array[MAX_SIZE];
    char input[4 * MAX_SIZE];

    int i;
    for(i=0; i<MAX_SIZE; i++) array[i] = 0;

    scanf("%d\n", &n);
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, " ");
    i = 0;
    while (token != NULL && i < MAX_SIZE){
        array[i++] = atoi(token);
        token = strtok(NULL, " ");
    }
    
    //printf("inputkakunin : %d, %d\n", array[0], array[1]);
    
    int sorted[MAX_SIZE];
    bucketsort(array);

    printf("sortkakunin\n");
    for(i=0;i<MAX_SIZE;i++) printf("%d\n", array[i]);
    printf("\n");
    

    int alice = 0;
    int bob = 0;
    for(i=0; i<MAX_SIZE/2; i++){
        printf("alice %d\n", array[i * 2]);
        alice += array[i * 2];
        printf("bob%d\n", array[i * 2 + 1]);
        bob += array[i * 2 + 1];
    }

    int diff = 0;
    diff = bob - alice;
    printf("%d\n", diff);
    return 0;
    
}

void *bucketsort(int *input){
    int bucket[MAX_SIZE];
    int i = 0; int j = 0; int k = 0;

    for(i=0; i<MAX_SIZE; i++) bucket[i] = 0;

    for(i=0; i<MAX_SIZE; i++){
        bucket[input[i]-1]++;
        printf("input[%d] %d bucket[%d] %d\n",i, input[i], input[i]-1 , bucket[input[i]-1]);
    }
    k=0;
    for(i=0; i<MAX_SIZE; i++){
        for(j=bucket[i]; j>0; j--){
            input[k] = i + 1;
            printf("i %d input[%d] %d\n",i, k, input[k]);
            k++;
        }
    }
    return 0;
}