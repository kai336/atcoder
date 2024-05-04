#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define MAX 100000

void makeadjlist(int n, int graph[n-1][2], int adjlist[n][n]){
    int i, index_start, index_goal;
    int top[n];
    for(i=0; i<n; i++){
        top[i] = 0;
    }
    for(i=0; i<n-1; i++){
        index_start = graph[i][0] - 1;
        index_goal = graph[i][1] - 1;
        adjlist[index_start][top[index_start]] = index_goal;
        adjlist[index_goal][top[index_goal]] = index_start;
        //printf("%d %d %d\n", index_start, top[index_start], adjlist[index_start][top[index_start]]);
        top[index_start]++;
        top[index_goal]++;
    }
    for(i=0; i<n; i++){
        adjlist[i][n-1] = top[i];
    }
}

bool seen[MAX];
void seeninit(void){
    int i;
    for(i=0; i<MAX; i++) seen[i] = false;
}

int scores[MAX];
void scoresinit(void){
    int i;
    for(i=0; i<MAX; i++){
        scores[i] = 0;
    }
}

int score;
void scoredfs(int n, int adjlist[n][n], int start){
    seen[start] = true;
    int i;
    for(i=0; i<adjlist[start][n-1]; i++){
        if(!seen[adjlist[start][i]]){
            //printf("reached %d\n", adjlist[start][i]+1);
            score++;
            scoredfs(n, adjlist, adjlist[start][i]);
        }
        
    }
    //printf("vertex %d score %d\n", start+1, score);
    scores[start] = score;
    score--;
}


int main(void){
    int n, i, j;
    scanf("%d", &n);
    
    int graph[n-1][2];
    int adjlist[n][n];

    //init adjlist
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            adjlist[i][j] = -1;
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

    /*
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", adjlist[i][j]);
        }
        printf("\n");
    }
    */

    //find diamater
    seeninit();
    scoresinit();
    score = 0;

    scoredfs(n, adjlist, 0);
    
    int max[2];
    max[1] = 0;
    for(i=0; i<n; i++){
        if(scores[i] > max[1]){
            max[0] = i;
            max[1] = scores[i];
        }
    }

    //printf("%d max %d\n", max[0], max[1]);

    seeninit();
    scoresinit();
    score = 0;

    scoredfs(n, adjlist, max[0]);
    max[1] = 0;
    for(i=0; i<n; i++){
        if(scores[i] > max[1]){
            max[0] = i;
            max[1] = scores[i];
        }
    }

    //printf("%d max %d\n", max[0], max[1]);

    printf("%d\n", max[1]+1);

    return 0;
}