#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    char input[MAX_SIZE];
    int i = 0;

    printf("数値列を入力してください（空白区切り）: ");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " \n");
    while (token != NULL && i < MAX_SIZE) {
        array[i++] = atoi(token);
        token = strtok(NULL, " \n");
    }

    printf("配列に変換された数値列:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }
    printf("\n");

    return 0;
}
