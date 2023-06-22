#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define MAX 100000

typedef struct{
    int data[MAX];
    int top;
}stack;

void stackpush(int x, stack stack){
    stack.data[stack.top] = x;
    stack.top++;
}

void stackpop(stack stack){
    stack.data[stack.top] = 0;
    stack.top--;
}

void stackinit(stack stack){
    int i;
    stack.top = 0;
    for(i=0; i<MAX; i++){
        stack.data[i] = 0;
    }
}

void makeadjlist(int n, int graph[n-1][2], int adjlist[n-1][n-1]){
    int i, index_start, goal;
    int top[n-1];
    for(i=0; i<n-1; i++){
        top[i] = 0;
    }
    for(i=0; i<n-1; i++){
        index_start = graph[i][0] - 1;
        goal = graph[i][1] - 1;
        adjlist[index_start][top[index_start]] = goal;
        printf("%d %d %d\n", index_start, top[index_start], adjlist[index_start][top[index_start]]);
        top[index_start]++;
    }
}

int countscore(int n, int adjlist[n][n]){
    int i, j;
    stack stack;
    stackinit(stack);
    bool notend = true;
    bool notempty = true;    
    i = 0;

    //find deepest vertex from 0
    while(notend && notempty){
        
    }

}

int main(void){
    int n, i, j;
    scanf("%d", &n);
    
    int graph[n-1][2];
    int adjlist[n-1][n-1];

    //init adjlist
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            adjlist[i][j] = 0;
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
    makeadjlist(n, graph, adjlist);

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            printf("%d ", adjlist[i][j]);
        }
        printf("\n");
    }

    //find diamater

    return 0;
}