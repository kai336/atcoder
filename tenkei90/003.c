#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void *makeadjmatrix(int n, int graph[n-1][2], int adjmatrix[n][n]){
    int i, index_start, index_goal;
    for(i=0; i<n-1; i++){
        index_start = graph[i][0] - 1;
        index_goal = graph[i][1] - 1;
        adjmatrix[index_start][index_goal] = 1;
        //printf("adj+ %d %d\n", index_start, index_goal);
    }
}

int main(void){
    int n, i, j;
    scanf("%d", &n);
    
    int graph[n-1][2];
    int adjmatrix[n][n];

    //init adjlist
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            adjmatrix[i][j] = 0;
        }
    }

    //make graph
    for(i=0; i<n-1; i++){
        scanf("%d %d", graph[i], graph[i]+1);
    }

    /*
    for(i=0; i<n-1; i++){
        printf("%d %d %d\n", i, graph[i][0], graph[i][1]);
    }
    */

    //make adjlist
    makeadjmatrix(n, graph, adjmatrix);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d", adjmatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}